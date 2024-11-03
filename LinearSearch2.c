#include <stdio.h>

void linearsearch(int arr[],int  n, int target)
        {
            for (int i = 0; i < n; i++)
            {
                if (target == arr[i])
                {
                    printf("Element found : %d", i+1);
                }
            }
            return ;
        }

int main()
    {
        int n, target;
        scanf("%d", &n);
        int arr[n];
        printf("Enter element :");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Enter target : ");
        scanf("%d", &target);
        linearsearch(arr, n, target);
        return 0;
    }