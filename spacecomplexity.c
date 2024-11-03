#include<stdio.h>  //total space occupied=(4n+8) => Linear Space Complexity
void main()
 {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }  
 }