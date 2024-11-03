#include<stdio.h>
int main()
{
    int a[5]={10,40,55,5,25};
    int x, i;
        
    for(i=1; i<=5; i++)
        {
            printf("%d th Enter element is: %d\n", i, a[i]);
        
        }

            scanf("%d",&x);
    for(i=1; i<=10; i++)
        {
            
            if (x!=a[i])
            {
                continue;
            }
            
            else
            {
                printf("Element found in %d th position\n", i);
                
            }
            
        }
    return 0;
}