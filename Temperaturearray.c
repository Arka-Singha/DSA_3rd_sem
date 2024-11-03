#include<stdio.h>
int main() {
    int arr[10];
    int N=6,temp;
    for (int i = 0; i < N; i++) {
        scanf("%d",&arr[i]);
    }
    int a=0, i=0;
    while(i<N-1)  {
        if ( arr[i]<arr[i+a+1] ) {
            arr[i]=a+1;
            a=0;
            i++;
        }
        else if ((i+a+1)==N-1)  {
            arr[i]=0;
            a=0;
            i++;
        }
        else {
            a++;
        }
    }
    arr[N-1]=0;
        for (int i = 0; i < N; i++) {
        printf("%d  ",arr[i]);
    }
}