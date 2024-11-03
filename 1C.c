#include<stdio.h>

        void countNonZero(int arr[][100], int n)
        {
            int count=0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[i][j]==0)
                    {
                        count++;
                    }                    
                 }
            }
        printf("No of non zero elements %d\n", count);
        }
        void SumLeadingDiagonal(int arr[][100], int n)
          {  
            int s=0;
            for (int i = 0; i < n; i++)
            {
                 
                    for(int j=0;j<n;j++)
                    {
                        if(i==j)
                        {
                        s=s+arr[i][j];
                        }
                    }                      
                 
            }      
             printf("Sum= %d\n", s);
          }
        void Dispbelowminor(int arr[][100], int n)
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (i+j > n-1)
                       { 
                        printf("%d ", arr[i][j]);                
                       }                
                       else
                       {
                        printf("_");
                       }
                    }
            printf("\n");
                }
            }
        void Productdiagonal(int arr[][100], int n)
                {
                    int p=1;
            for (int i = 0; i < n; i++)
            {
                 
                    for(int j=0;j<n;j++)
                    {
                        if(i==j)
                        {
                        p=p*arr[i][j];
                        }
                    }                      
                 
            }      
             printf("Product= %d\n", p);
                }

int main()
    {
        int n;
        printf("enter no of rows/columns");
        scanf("%d", &n);
        int arr[100][100];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }

        countNonZero( arr, n);
        SumLeadingDiagonal( arr, n);
        Dispbelowminor( arr, n);
        Productdiagonal( arr, n);


    return 0;
    }