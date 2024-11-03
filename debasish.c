#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;

void Insert(int val,int pos)
{
    int i;
    struct Node temptr=(struct Node)malloc(sizeof(struct Node));
    temptr->data=val;
    temptr->next=NULL;
    if(pos==1)
    {
        temptr->next=head;
        head=temptr;
    }
    else
    {
    struct Node *temptr2;
    temptr2=head;
    for(i=1;i<pos-1;i++)
    {
        temptr=temptr2->next;
    }
    temptr->next=temptr2->next;
    temptr2->next=temptr;
    }
}

int main()
{
    struct Node *newnode,*ptr;
    head=NULL;
    int n,num,i;
    printf(" Enter the number of nodes required :");
    scanf("%d",&n);
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value of data for 1 node :");
    scanf("%d",&num);
    newnode->data=num;
    newnode->next=NULL;
    head=newnode;
    ptr=head;
    for(i=2;i<=n;i++)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter the value of data for %d node :",i);
        scanf("%d",&num);
        newnode->data=num;
        newnode->next=NULL;
        ptr->next=newnode;
        ptr=ptr->next;
    }
    
    printf("The values are inseted into the linked list\n");
    printf("\n");
    printf("Enter the data you want to insert:");
    int val,pos;
    scanf("%d",&val);
    printf("Enter the value you want to insert :");
    scanf("%d",&pos);
    Insert(val,pos);
    
    struct Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%4d",temp->data);
        temp=temp->next;
    }
    
}