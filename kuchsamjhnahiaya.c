#include<stdio.h>
int TOP=-1;
int N=20;
int stack[20];

void PUSH(int val)
    {
        if (TOP==N-1)
        printf("STACK OVERFLOW !!!");
        else
        {
            TOP++; stack[TOP]=val;
        }
    }

int POP()
    {
        if (TOP==-1)
        printf("STACK UNDERFLOW");
        else
        {
            TOP--;
            return(stack[TOP+1]);
        }
    }
void display()
    {
        for (int i=0; i<=TOP; i++)
        printf("%d", stack[i]);
    }
void main()
    {
        PUSH(82); PUSH(43); PUSH(90); POP();
        display();
    }
