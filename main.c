#include "NumClass.h"
#include <stdio.h>

int main(){
    int a = 1;
    int b = 10000;
    scanf("%d %d",&a,&b);
    int t = 0;
    printf("The Armstrong numbers are:");
    for(int i = a; i <= b; i++){
        t = isArmStrong(i);
        if(t == 1){
            printf(" %d", i);
        }
        
    }
    printf("\n");
    printf("The Palindromes are:");
    for(int i = a; i <= b; i++){
        t = isPalindrome(i);
        if(t == 1){
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    for(int i = a; i <= b; i++){
        t = isPrime(i);
        if(t == 1){
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for(int i = a; i <= b; i++){
        t = isStrong(i);
        if(t == 1){
            printf(" %d", i);
        }
    }
    printf("\n");
   
    
    return 0;
}
