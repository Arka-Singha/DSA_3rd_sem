#include<stdio.h>
int N=10; //Global variable
void main()
{
    int a[N],i;
    for(i=0; i<=N-1; i++)
        {
            printf("Enter element: %d",i+1);
            scanf("%d",&a[i]);
        }
for(i=0; i<=N-1; i++)
        {
            printf("Enter element %d is: %d",i+1,&a[i]);
        
        }
       
}