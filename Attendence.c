#include<stdio.h>
#include <stdlib.h>
struct Node{
    char id[20];
    float percent;
    float attpercent;
    struct Node *next;
};
struct Node *creatnode(int i)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter name of subject-%d: ", ++i);
    scanf("%s", &newNode->id);
    printf("Enter percent of subject-%d: ", ++i);
    scanf("%f", &newNode->percent);
    newNode->next = NULL;
    return newNode;
}
float Cal1(float x){
    if(225 - 2*x<0)
    {
        return 0;
    }
    else
    {
        return (225 - 2*x);
    }
}

float Cal2(float x){
    if(150 - x<0)
    {
        return 0;
    }
    else
    {
        return (150 - x);
    }
}

void Traverse(struct Node *head)
{
    struct Node *ptr=head;
    printf("Subject Id       current Attendance Percentage     required Attendance Percentage in remaining\n");
    while(ptr!=NULL){
        ptr->attpercent = Cal1(ptr->percent);
        printf("%s                %.2f 1st 2 months                   %.2f  for last 1 month if course duration 3 months \n",ptr->id,ptr->percent,ptr->attpercent);
        ptr->attpercent = Cal2(ptr->percent);
        printf("%s                %.2f 1st 2 months                    %.2f  for last 2 month if course duration 4 months           \n",ptr->id,ptr->percent,ptr->attpercent);
        ptr = ptr->next;
        
    }
}
int main()
{
    int n,c=0,i=1,ch;
    //scanf("%d",&n);
    struct Node *head = NULL;
    struct Node *ptr;
    printf("1. Add a record\n2.Display Table\n3.Exit\n");
    while(c==0)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter option: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
        printf("Enter name of subject-%d: ", i);
        scanf("%s", &newNode->id);
        printf("Enter percent of subject-%d: ", i);
        scanf("%f", &newNode->percent);
        newNode->next = NULL;
        if(head==NULL)
        {
            head = newNode;
            ptr = head;
        }
        else
        {
            ptr->next = newNode;
            ptr = newNode;
        }
        i++;
        break;
        case 2:
            Traverse(head);
            break;
            case 3:
            c = 1;
            break;
        }
        
    }
    
    return 0;
}