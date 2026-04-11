/********************************************************************************************
Filename    :      fnrc.c

Description :      

Author Name :      Vinayak

Version     :      1.0
*********************************************************************************************/

#include<stdio.h>

int main()
{

    // ip: aabbbcdde
    // op: c

    char str[] = "aaabbccddef";
    char k;

    char prev=str[0],curr=str[1],next = str[2];

    for(int i=0; str[i]!=0; i++){
        if((prev != curr) && (curr!=next)){
            k = str[i];
            break;
        }
        prev = curr;
        curr = next;
        next = str[i+2];
    }
    printf("%c\n", k);
}
