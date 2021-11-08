#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isPrime(int input){
    int t = (int)sqrt(input);
    for(int i = 2; i <= t; i++){
        if (input % i == 0){
            return 0;
        }
    }
    return 1;
}

int isStrong(int input){

    int x = input;
    int q = (int)(log10(input)) + 1;
    int sum = 0;
    int temp = 1;
    for (int i = 0; i < q; i++){
        temp = 1;
        for (int j = 1; j <= (x % 10); j++){
            temp *= j;
        }
        x /= 10;
        sum += temp;
    }
    if (sum == input){
        return 1;
    }
    else return 0;
}