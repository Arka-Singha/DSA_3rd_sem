#include<stdio.h>
void sparsh(int arr[][100], int Counter, int m, int n)
   {  int R=0, SP[Counter+1][3];

       SP[R][0]=m;
          SP[R][1]=n;
          SP[R][2]=Counter;
         for (int i = 0; i < m; i++)
         {  
            for (int j = 0; j < n; j++)
            {
               if(arr[i][j]!=0)
            {  R++;
               SP[R][0]=i;
               SP[R][1]=j;
               SP[R][2]=arr[i][j];
            }
            }
         }
            
            for (int i = 0; i < Counter+1; i++)
            {
               for (int j = 0; j < 3; j++)
               {
                  printf("%d ", SP[i][j]);
               }
               printf("\n");
               
            }
}
int main(){
 int arr[100][100];
 int m,n, Counter=0;
 scanf("%d", &m);
 scanf("%d", &n);

 for (int i = 0; i < m; i++)
 {
    for (int j = 0; j < n; j++)
    {
      scanf ("%d", &arr[i][j] );
    }
    
 }

  for (int i = 0; i < m; i++)
 {
    for (int j = 0; j < n; j++)
    {
      printf ("%d ",arr[i][j] );
      if(arr[i][j]!=0)
      {
         Counter++;
      }
    }
    printf("\n");
 }
printf("\n\n");
 sparsh(arr, Counter,  m,  n);
    
    return 0;
}