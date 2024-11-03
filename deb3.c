#include <stdio.h>

int main()
{
    int deg,i;
    printf("Enter the degree of the first polynomial:");
    scanf("%d",&deg);
    int pol[deg+1];
    printf("\n");
    printf("\nEnter the coeficient values of first polynomial here:\n");
    for(i=0;i<=deg;i++)
    {
        printf("Enter the coeficient of x^%d here :",i);
        scanf("%d",&pol[i]);
    }
    for(i=deg;i>=0;i--)
    {
        if(i!=0)
        {
            if(i!=1)
            {
                printf("%dx^%d + ",pol[i],i);
            }
            else
            {
                printf("%dx +",pol[i]);
            }
        }
        else
        {
            printf("%d",pol[i]);
        }
    }
    printf("\n");
    int deg1;
    printf("Enter the degree of the second polynomial:");
    scanf("%d",&deg1);
    int pol1[deg1+1];
    printf("\n");
    printf("\nEnter the coeficient values of second polynomial here:\n");
    for(i=0;i<=deg1;i++)
    {
        printf("Enter the coeficient of x^%d here :",i);
        scanf("%d",&pol1[i]);
    }
    for(i=deg1;i>=0;i--)
    {
        if(i!=0)
        {
            if(i!=1)
            {
                printf("%dx^%d + ",pol1[i],i);
            }
            else
            {
                printf("%dx +",pol1[i]);
            }
        }
        else
        {
            printf("%d",pol1[i]);
        }
    }
    //Adition operation.
    int dg;
    if(deg=deg1)
    {
        dg=deg1;
    }
    else if(deg>deg1)
    {
        dg=deg;
    }
    else
    {
        dg=deg1;
    }
    int add[100];
    
        for(i=0;i<=dg;i++)
        {
            add[i]=pol[i]+pol1[i];
        }
    
    
    
    for(i=dg;i>=0;i--)
    {
        if(i!=0)
        {
            if(i!=1)
            {
                printf("%dx^%d + ",add[i],i);
            }
            else
            {
                printf("%dx +",add[1]);
            }
        }
        else
        {
            printf("%d",add[i]);
        }
    }
    return 0;
}