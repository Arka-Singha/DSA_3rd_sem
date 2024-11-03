#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void Traverse(struct Node *head)
{
    struct Node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        if(ptr->next!=NULL)
        {
            printf(" -> ");
        }
        ptr=ptr->next;
    }
}
struct Node *Reverse(struct Node *head)
{
    struct Node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr->next->next=ptr;
        ptr=ptr->next;
    }
    return head;
}
int main(){
    int n;
    printf("Enter the no of nodes: ");
    scanf("%d",&n);
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the %d elements:",n);
    scanf("%d",&head->data);
    head->next=NULL;
    struct Node *ptr=head;
    for(int i=1;i<n;i++)
    {
        struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        ptr->next=newNode;
        ptr=newNode;
    }
    Traverse(head);
    Reverse(head);
    printf("Reversed List:\n");
    Traverse(head);
    return 0;
}