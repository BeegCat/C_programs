/********************************************************************************************
Filename    :      checkpowerof2.c

Description :      This program checks whether a given number is a power of 2 or not
                   Example:
                   input  = 128
                   output = Number is a power of 2

                   input  = 120
                   output = Number is NOT a power of 2

                   We are using unsigned int as the datatype for the user provided number for the sake of simplicity.
                   Signed integers may also be used, which will be added later.
Author Name :      Vinayak

Version     :      1.0
*********************************************************************************************/

#include<stdio.h>

int main(){

    unsigned int x;
    scanf("%u", &x);

    int count = 0;

    for(int i=31; i>=0; i--){
        if(((x>>i)&1)==1){
            count++;
        }
        if(count>=2){
            printf("Number is NOT a power of 2\n");
            return -1;
        }
    }
    printf("number IS a power of 2\n");
}
