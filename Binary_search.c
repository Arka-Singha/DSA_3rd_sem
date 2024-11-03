//Arka Singha - 2230068
#include<stdio.h>

void swap(int *a, int *b);
void sort(int n, int A[]);
int binary_srch(int low, int high, int key, int A[]);

int main(){
    int n;
    printf("Enter number of elements to be inserted in the array : ");
    scanf("%d", &n);
    int A[n],c=1,res,key;
    printf("Enter elements of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &A[i]);
    }
    sort(n, A);
    printf("\n");
    int low=0, high=n;
    while(c==1){
        printf("Enter the element to be searched : ");
        scanf("%d", &key);
        res = binary_srch(low,high,key, A);
        if(res==-1)
            printf("Element not found \n");
        else
            printf("%d found at index %d of the array \n", key, res);
        printf("Enter 1 to search for more elements, enter 0 to exit : ");
        scanf("%d", &c);
        printf("\n");
    }
    return 0;
}

int binary_srch(int low, int high, int key, int A[]){
    if(low==high && A[low]!=key){
        return -1;
    }
    else{
        int mid=(low+high)/2;
        if(A[mid]==key)
            return mid;
        else if(A[mid]>key)
            binary_srch(low,mid-1,key,A);
        else
            binary_srch(mid+1,high,key,A);
    }
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

void sort(int n, int A[]){
	int i,j,temp;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(A[j]>A[j+1])
				swap(&A[j],&A[j+1]);
		}
	}
	printf("After Sorting elements of the array are : ");
	for(i=0; i<n; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}