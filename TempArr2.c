#include<stdio.h>
int main() {
    int arr[10];
    int N=6,temp;
    for (int i = 0; i < N; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < N; i++) {   
        int count=0;
        for (int j = N-1; j >= i+1; j--) {  
            if (arr[i]<arr[j]) {
            count++;
             temp=j-i ;
             }
        }
            if (count==0)
                temp = 0;
        arr[i]=temp;
    }
    for (int i = 0; i < N; i++) {
        printf("%d  ",arr[i]);
    }
    return 0;
}