#include<stdio.h>
int N=20;
int queue[20];
int FRONT=0;
int REAR=-1;
void ENQUEUE(int val)
 {
    if (REAR==N-1)
    printf("overflow");
    else
    {
        REAR++;
        queue[REAR]=val;
    }
 }
 int DEQUEUE()
    {
        if (FRONT>REAR)
        {
            printf("UNDERFLOW");
            FRONT=0; REAR=-1;
        }
        else
        {
            FRONT++;
            return (queue[FRONT-1]);
        }
    }
void Display()
    {
        for(int i=FRONT; i<=REAR; i++)
        printf("%d ", queue[i]);
        
    }
void main()
    {
        ENQUEUE(32);
        ENQUEUE(46);
        Display();
        printf("\n");
        DEQUEUE();
        Display();
    }