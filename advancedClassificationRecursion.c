#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isAid(int input, int index){ //aid one
    if(input == 0){
        return 0;
    }
    return isAid((input/10), index) + pow(input%10,index);
    
}

int isArmStrong/*R*/(int input){ //main onc
    int q = (int)(log10(input) + 1);
    int p = isAid(input, q);

    if(p == input){
        return 1;
    }
    else return 0;
}




int AidPalindromeR(int input){
    if(input == 0){
        return 0;
    }
    int numberofdigits = (int) log10(input);
    return AidPalindromeR(input/10) + ((input % 10) * pow(10,numberofdigits));
    
}
int isPalindrome/*R*/(int input){
    if(AidPalindromeR(input) == input){
        return 1;
    }
    return 0;
}