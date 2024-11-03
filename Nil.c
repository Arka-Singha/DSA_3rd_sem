#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *p1=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p2=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p3=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p4=(struct Node *)malloc(sizeof(struct Node));
    p1->data=1;
    p1->next=p2;
    p2->data=2;
    p2->next=p3;
    p3->data=3;
    p3->next=p4;
    p4->data=4;
    p4->next=NULL; 
    struct Node *ptr=p1;
    while(ptr !=NULL)
    {
        printf("Element: %d ",ptr->data);
        if (ptr-> next != NULL)
        printf("+");
        ptr=ptr->next;
    }
    return 0;
}
