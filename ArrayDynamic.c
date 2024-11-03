#include<stdio.h>
#include<stdlib.h>
int main(){
    int r=2,c=3;
    int *ar[][100]=(int *)malloc(r* c * sizeof(int));
    printf("Enter %d numbers:",r*c);
    for(int i =0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        scanf("%d",&ar[i][j]);
    }
    }
    printf("Numbers:\n");
    for(int i =0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        printf("%d",ar[i][j]);
        }
    printf("\n");
    }
    return 0;
}