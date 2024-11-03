#include<stdio.h>
#include<stdlib.h>
int head,temp;
struct node 
void insert_begin(int val)
{
    struct node *temp;
    temp->data=val;
    temp->next=head;
    head=temp;
}
void main()
{
    struct node *temp;
    temp=malloc(sizeof (struct node));
    temp ->data=val;
    temp->next=NULL;
    head=temp;
    temp=malloc(sizeof (struct node));
        temp-> val;
        temp -> next=NULL;
        head -> next=temp;
}
void display()
{
    struct node*temp=head;
    while (temp->next != NULL ) {
        printf("%d",temp->data);
        temp=temp->next;}
        printf("%d->",temp->data);
}

struct node *ptr, *temp;
ptr= head; temp=head;
while (temp -> next!=NULL)
{
    ptr=temp;
    temp=temp -> next;
}
ptr -> next=NULL;
free (temp);
}
