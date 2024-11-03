#include<stdio.h>
void greater(int a, int b)
    {
        printf("print 2 numbers:");
        scanf("%d",&a);
        scanf("%d",&b);
        if(a>b)
        {
            printf("%d is greater",a);
        }
        if(b>a)
        {
            printf("%d is greater",b);
        }
        if(a=b)
        {
            printf("Both numbers are equal");
        }

    }
int main(){
    greater();
    return 0;
}