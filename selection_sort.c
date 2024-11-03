#include<stdio.h>

void swap(int *a, int *b)
    {
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }

void selection_sort_min(int array[], int n) 
{
    int i, j, min_idx;

  // One by one move boundary of unsorted subarray
  for (i = 0; i < n-1; i++) {
    // Find the minimum element in unsorted subarray
    min_idx = i;
    for (j = i+1; j < n; j++) {
      if (array[j] < array[min_idx])
        min_idx = j;
    }
    // Swap the found minimum element with the first element
    swap(&array[min_idx], &array[i]); 
}
    for (int i = 0; i < n; i++)
        {
            printf("%d  ", array[i]);
        }
        
}

void selection_sort_max(int array[], int n) {
  int i, j, max_idx;

  // One by one move boundary of unsorted subarray
  for (i = 0; i < n-1; i++) {
    // Find the minimum element in unsorted subarray
    max_idx = 0;
    for (j = 1; j < n-i; j++)
      if (array[j] > array[max_idx])
        max_idx = j;

    swap(&array[max_idx], &array[n-i-1]);
    
  }
  for (int i = 0; i < n; i++)
        {
            printf("%d  ", array[i]);
        }

        printf("\n");
}

// Function to print an array
void printArray(int array[], int n) {
  int i;
  for (i = 0; i < n; i++)
    printf("%d  ", array[i]);
  printf("\n");
}

int main()
    {
        int n;
        int *arr=(int*)malloc(n * sizeof(int));
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        selection_sort_max(arr, n);
        selection_sort_min(arr, n);

        return 0;
    }

    /*
The statement int *arr=(int*)malloc(n * sizeof(int)); is a C code
 snippet that allocates memory for an integer array and 
 initializes a pointer to point to that memory. Let's break down 
 the statement step by step:

int *arr: This declares a pointer variable named arr that can 
store the address of an integer. The asterisk (*) indicates that 
arr is a pointer.



(int*): This is a type cast operator that converts the expression
 malloc(n * sizeof(int)) to an integer pointer. The malloc 
 function returns a void pointer, which is a generic pointer that
  can point to any type of data. The type cast ensures that the 
  returned void pointer is treated as an integer pointer.

malloc(n * sizeof(int)): This expression calls the malloc 
function, which allocates contiguous memory from the heap. 
The argument n * sizeof(int) specifies the size of the memory 
block to be allocated. n is the number of elements in the array, 
and sizeof(int) is the size of a single integer in bytes. The 
malloc function returns a void pointer to the allocated memory 
block.
*/