#include <stdio.h>

int main()
{
    int deg,i;
    printf("Enter the degree of the polynomial:");
    scanf("%d",&deg);
    int pol[deg+1];
    printf("\n");
    printf("\nEnter the values of polynomial here:\n");
    for(i=0;i<=deg;i++)
    {
        printf("Enter the coeeficient of x^%d here :",i);
        scanf("%d",&pol[i]);
    }
    for(i=0;i<=deg;i++)
    {
        printf("%d x^%d+ ",pol[i],i);
    }
    return 0;
}