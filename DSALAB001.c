#include<stdio.h>
void greater(int *a, int *b)
    {
        printf("print 2 numbers:");
        scanf("%d",a);
        scanf("%d",b);
        if(*a>*b)
        {
            printf("%d is greater",*a);
            printf("\n%d is smaller",*b);
        }
        if(*b>*a)
        {
            printf("%d is greater",*b);
            printf("\n%d is smaller",*a);
        }
        if(*a==*b)
        {
            printf("Both numbers are equal");
        }

    }
int main(){
    int a,b;
    greater(&a,&b);
    return 0;
}