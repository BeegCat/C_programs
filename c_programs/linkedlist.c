/********************************************************************************************
  Copyright 2025 - Vinayak Onimani 

  All Rights Reserved.

  This source code is an unpublished work that belongs to Vinayak Onimani.

Filename    :      ll.c

Description :      Simple linear linked list.

Author Name :      Vinayak

Version     :      1.0
 *********************************************************************************************/
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head = NULL, *curr = NULL;


void insertAtEnd(int val, struct Node *_head){
    struct Node *t = _head;
        while(t->next!=NULL){
            t = t->next;
        }
        struct Node *new = malloc(sizeof(struct Node));

        new->data = val;
        new->next = NULL;

        t->next = new;
        //printf("%d ", new->data);
}

int main(){
    int temp;

    for(int i=0; i<5; i++){
        printf("enter %dth data\n", i);
        scanf("%d", &temp);
        struct Node *newnode = malloc(sizeof(struct Node));
        if(head==NULL){
            newnode -> data = temp;
            newnode -> next = NULL;
            head = newnode;
        }

        else{
            insertAtEnd(temp, head);
        }
    }

    while(head!=NULL){
        printf("%d ", head->data);
        head = head->next;
    }
}


