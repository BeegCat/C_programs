/********************************************************************************************
Filename    :      fib.c

Description :      Fibonacci series

Author Name :      Vinayak

Version     :      1.0
*********************************************************************************************/

#include<stdio.h>

// 0 1 1 2 3 5 8 
// p c n
//   p c n
//     p c n

int main()
{
    int prev=0, curr=1, next=1;

    for(int i=0; i<10; i++){
        if(i==0)
            printf("%d %d ", prev, curr);
        prev = curr;
        curr = next;
        next = prev + curr;
        printf("%d ", next);
    }
}
