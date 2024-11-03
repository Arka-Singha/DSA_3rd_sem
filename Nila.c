#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int isEmpty(struct Node *head)
{
    if(head==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct Node *Insert(struct Node *head, int data, int pos,int cnt1)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr=head;
    if(isEmpty(head))
    {
        newNode->data = data;
        newNode->next = NULL;
        head = newNode;
        printf("%d element inserted!\n",newNode->data);
    }
    else
    {
        if((pos-1)!=0)
        {
        for (int i = 0; i <pos-2;i++)
        {
            ptr = ptr->next;
        }
        newNode->data = data;
        newNode->next = ptr->next;
        ptr->next = newNode;
        printf("%d element inserted!\n",newNode->data);
        }
        else
        {
            newNode->data = data;
            newNode->next = head;
            head = newNode;
            printf("%d element inserted!\n",newNode->data);
        }
        }
    return head;
}
void Traverse(struct Node *head)
{
    struct Node *ptr = head;
    printf("The List: ");
    while(ptr!=NULL)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
    printf("\n");
}
struct Node *Delete(struct Node *head,int pos,int cnt1)
{
    struct Node *ptr1 = head;
    if(cnt1==1)
    {
        head= ptr1->next;
        printf("%d element deleted!\n",ptr1->data);
        free(ptr1);
    }
    else
    {
        if(pos<=cnt1+1)
        {
        if((pos-1)!=0)
        {
            struct Node *ptr2 = ptr1->next;
            for (int i = 0; i < pos - 2;i++)
            {
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            ptr1->next = ptr2->next;
            printf("%d element deleted!\n",ptr2->data);
            free(ptr2);
        }
        else
        {
            head = ptr1->next;
            printf("%d element deleted!\n",ptr1->data);
            free(ptr1);
        }
        }
        else
        {
            printf("No element found to be deleted!\n");
        }
    }
    return head;
}
int main()
{
    int n,i=0,cnt1=0;
    struct Node *head=NULL;
    printf("Enter no of nodes: ");
    scanf("%d",&n);
    printf("1. Insert_at_pos\n2. Delete_at_pos\n3. Traverse\n4. Exit\n");
    while(i==0)
    {
        int c;
        printf("Enter option: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            if(cnt1<n)
            {
            if(isEmpty(head))
            {
                int data,pos;
                printf("Enter the element to be inserted: ");
                scanf("%d",&data);
                head = Insert(head,data,pos,cnt1);
                cnt1++;
            }
            else
            {
       
                int data,pos;
                printf("Enter the element to be inserted: ");
                scanf("%d",&data);
                printf("Enter the position: ");
                scanf("%d",&pos);
                if(pos!=cnt1+2)
                {
                    if((pos-1)==0)
                    {
                    head = Insert(head, data,pos,cnt1);
                    cnt1++;
                    }
                    else
                    {
                    Insert(head, data, pos,cnt1);
                    cnt1++;
                    }
                }
                else
                {
                    printf("Element cannot be inserted!\n");
                }
            }
            }
            else
            {
                printf("Linked list is Full!\n");
            }
            break;
            case 2:
                if(!isEmpty(head))
                {
                    int pos;
                    if(cnt1==1)
                    {
                        head = Delete(head, pos,cnt1);
                        cnt1--;
                    }
                    else
                    {
                        int pos;
                        printf("Enter the position of the element to be deleted: ");
                        scanf("%d",&pos);
                        if(pos<cnt1+1)
                        {
                        if((pos-1)!=0)
                        {
                            Delete(head, pos,cnt1);
                            cnt1--;
                        }
                        else
                        {
                            head = Delete(head, pos,cnt1);
                            cnt1--;
                        }
                        }
                        else
                        {
                            printf("No element found to be deleted!\n");
                        }
                    }
                }
                else
                {
                    printf("Linked list is Empty!\n");
                }
            break;
            case 3:
            Traverse(head);
            break;
            case 4:
            i = 1;
            break;
        }
    }
    return 0;
}