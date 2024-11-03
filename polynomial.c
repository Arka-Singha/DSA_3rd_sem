#include<stdio.h>
int main()
{
    int a[3]={2,3,2},b[3]={-1,0,1},c[5]={0,0,0,0,0},i,j;
for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        { 
            c[i+j]+=a[i]*b[j];
        }
    }
    for (i=0;i<5;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}