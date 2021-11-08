



all: loops recursives recursived loopd mains maindloop maindrec
loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so

libclassloops.a: advancedClassificationLoop.o basicClassification.o
	ar -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o

libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o

libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	gcc -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o

libclassloops.so: advancedClassificationLoop.o basicClassification.o
	gcc -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o



advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -Wall -g -c advancedClassificationLoop.c -lm

basicClassification.o: basicClassification.c NumClass.h
	gcc -Wall -g -c basicClassification.c -lm

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -Wall -g -c advancedClassificationRecursion.c -lm

main.o: main.c NumClass.h
	gcc -Wall -g -c main.c

#ghggh
mains: main.o libclassrec.a
	gcc -Wall -g -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	gcc -Wall -g -o maindrec main.o ./libclassrec.so -lm



.PHONY: clean all
clean:
	rm -f *.o *.a *.so mains maindloop maindrec
