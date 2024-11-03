#include<stdio.h>
int main()
{
    int a[10],x,i;
    for(i=1; i<=10; i++)
        {
            printf("%d th Enter element",i);
            scanf("%d",&a[i]);
        }

    for(i=1; i<=10; i++)
        {
            printf("%d th Enter element is: %d\n", i, a[i]);
        
        }

    for(i=1; i<=10; i++)
        {
            scanf("%d",&x);
            if (x==a[i])
            {
                printf("Element found in %d th position\n", i);
            }
            
           
        }
    return 0;
}