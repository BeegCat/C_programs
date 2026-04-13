/********************************************************************************************
Filename    :      extractBitField.c

Description :     This program extracts bits within the range of [higher bound, lower bound]
                  example
                  input        = 181 = 10110101
                  higher bound = 5
                  lower bound  = 2

                  output = 1101

Author Name :      Vinayak

Version     :      1.0
*********************************************************************************************/

#include<stdio.h>

int main(){
    unsigned int x;
    int higher, lower;

    scanf("%u", &x);

    printf("enter higher bound\n");
    scanf("%d", &higher);
    printf("enter lower bound\n");
    scanf("%d", &lower);

//    1011 0101
//    7       0
//      5   2
   
    // printing only the bits in that range of positions
    for(int i=higher; i>=lower; i--){
            printf("%d", (x>>i)&1);
    }
    printf("\n");

    // extraction of those bits for reusing them later in the program
    unsigned int newnum = 0;
    for(int i=higher; i>=lower; i--){
        newnum <<= 1;
        newnum |= ((x>>i)&1) ;
    }
    printf("%d\n", newnum);
    printf("\n");
}
