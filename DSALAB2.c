#include<stdio.h>
int main()
{
    int a[5]={10,40,55,5,25};
    int x, y, i, j;
    for(i=0; i<5; i++)   
        {
            scanf("%d",&a[i]);

        } 
    for(i=0; i<5; i++)
        {
            printf("%d th Enter element is: %d\n", i+1, a[i]);
        
        }

            scanf("%d",&x);
            scanf("%d",&y);

        for(i=0; i<5; i++)
            {
                
                if (x==a[i])
                {
                    printf("Element found in %d th position\n", i+1);
                }
            }
        for(i=0; i<5; i++)
            {   
                if (y==a[i])
               {
                    printf("Element found in %d th position\n", i+1);
                }

            }
        printf("%d\n",i);
        if (i=5)
        {
           break;
        printf("Element is not found");
        }
       
    
    return 0;
}