#include<stdio.h>

int main(){
    int x;
    int c=1;
    scanf("%d", &x);

    for(int i=2; i<x; i++){
        if(x%i==0){
            c+=1;
            break;
        }
        else{
            continue;
        }
    }
    if(c==1){
        printf("its a prime!\n");
    }
    else{
        printf("not a prime\n");
    }
}