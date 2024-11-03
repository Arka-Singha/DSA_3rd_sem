#include<stdio.h>

int main(){
    int n;
    printf("No of elements:");
    scanf("%d",& n);
    int a[n];
    for (int i = 0; i < n; i++)
    {   
        printf("Enter elements: ");
        scanf("%d",& a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    int temp;
    for (int j = 0; j < n-1; j++)
    {
        for(int i=0; i < n-j; i++)
        {    if(a[i] > a[i+1])
            {   
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("\n\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
        printf("\n\t");
    }
    return 0;
}