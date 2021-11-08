#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isPalindrome(int input){
    int result, sum = 0, temp;
    temp = input;
    while(input > 0){
        result = input % 10;
        sum = (sum * 10) + result;
        input /= 10;
    }
    if( temp == sum){
        return 1;
    }
    else return 0;
}


int isArmStrong(int input){
    int x  = input;
    int q = (int)(log10(input) + 1);
    int sum = 0;
    int temp = 0;
    for(int i = 0; i < q; i++){
        temp = input % 10;
        input /= 10;
        sum += (int)(pow(temp,q));
    }
    if(sum == x){
        return 1;
    }
    else return 0;
}