#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int size;
    int top;
    int *ar;
};
struct Stack Push(struct Stack s,int data)
{
    if(s.top==s.size-1)
    {
        printf("Overflow!");
    }
    else
    {
        s.top++;
        s.ar[s.top]=data;
    }
    return s;
}
struct Stack Pop(struct Stack s)
{
    if(s.top==-1)
    {
        printf("Stack Underflow!");
    }
    else
    {
        printf("%d deleted from the stack!\n",s.ar[s.top]);
        s.top--;
    }
    return s;
}
int Peek(struct Stack s,int i)
{
    int j=i-1;
    if(j>s.top)
    {
        printf("Invalid Position");
    }
    else
    {
        return s.ar[j];
    }
}
void Traverse(struct Stack s)
{
    for(int i=0;i<=s.top;i++)
    {
        printf("%d ",s.ar[i]);
    }
}
int main()
{
    struct Stack s;
    s.size=5;
    s.top=-1;
    s.ar=(int *)malloc(s.size * sizeof(int));
    s = Push(s,11);
    s = Push(s,12);
    s = Push(s,13);
    //s = Pop(s);
    Traverse(s);
    for(int i=1;i<=s.top+1;i++)
    {
        printf("Value at Position %d is %d\n",i,Peek(s,i));
    }
    return 0;
}