#include<stdio.h>
void swap(int *a,int *b)
                { 
                    int temp;
                    temp = *a;
                    *a=*b ;
                    *b=temp ;
                }
void Bubble_sort(int arr[],int n)
    {   
        int temp;

        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if (arr[j]>arr[j+1])
                swap(&arr[j], &arr[j+1]);
            }
        }
        
        for (int i = 0; i < n; i++)
            {
                printf("%d\t", arr[i]);
            }
    }

int main(){
    int n=0;
    printf("Enter no of elements in the array :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d\n", i+1);
        scanf("%d", &arr[i]);
    }

     for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    Bubble_sort(arr,n);

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
/*In C, when you pass a variable to a function, you are passing a copy of its value.
 This is known as "pass by value." For primitive data types like int, float, etc., 
 this behavior is straightforward because the function operates on its own copy of 
 the data, and modifications do not affect the original variable in the calling
 function.
           However, when you pass an array to a function, what gets passed is the 
address (or reference) of the first element of the array. This address is still a 
value, but it's a value that represents the location in memory where the array is 
stored. The function can use this address to access and modify the actual data in 
the array. */