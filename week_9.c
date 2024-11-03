//2230068 - Arka Singha

#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int n, int A[]);

int main(){
    int n, i;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int A[n];
    printf("Enter elements of the array : ");
    for(i=0;i<n;i++){
        scanf("%d", &A[i]);
    }
    printf("\nElements of the array before sorting : ");
    for(i=0;i<n;i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    insertion_sort(n, A);
    return 0;
}

void insertion_sort(int n, int A[]){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=A[i];
        j=i-1;
        while(A[j]<temp && j>=0){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }
    printf("After sorting in descending order, the elements of array are : ");
    for(i=0;i<n;i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}