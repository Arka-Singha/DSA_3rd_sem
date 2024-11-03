#include<stdio.h>
int fact(int n) {
    if (n==0||n==1)
    return(1);              //RECURSION FUNCTION
    else
    return(n*fact(n-1));
}
void main()
    {
        int n;
        scanf("%d",&n);
        printf("%d! = %d",n,fact(n));
    }