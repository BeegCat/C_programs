/********************************************************************************************
Filename    :      arrayToNumbers.c

Description :      

Author Name :      Vinayak

Version     :      1.0
*********************************************************************************************/

#include<stdio.h>

int main(){
    int arr[5];
    int num=0;

    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    // 1,2,3,4,5
    // 10000

    for(int i=0; i<5; i++){
        num = (num * 10) + arr[i];
    }

    printf("%d\n", num);
}
