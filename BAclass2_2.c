#include<stdio.h>       //Call by value
void swap(int a, int b)
{
    int temp= a;
    a= b;
    b=temp;
     printf("In swap function a=%d, b=%d\n", a, b);
     //printf("In swap function a=%d, b=%d\n",&a,&b);
}

void main()
{
    int a=2, b=3;
    swap( a, b);
//    printf("In swap function a=%d, b=%d",a,b);

    //printf("In swap function a=%d, b=%d",&a,&b);
}