#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
    struct node *head;
void main(){
    struct node *temp;
    temp=malloc(sizeof(struct node));
    temp->data=32;
    temp->next=NULL;
    head=temp;
    temp=malloc(sizeof(struct node));
    temp->data=12;
    temp->next=NULL;
  
     while (temp->next!=NULL)
     {
        printf("%d",temp->data);
     }
    
}
