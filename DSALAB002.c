#include <stdio.h>
//(1)create an array for 10 element
//(2)find the prime numbers
//(3)sort them out.
//(4)add them and calculate the sum
int main() {
    int n, i, j;
    printf("What is the number of elements?\n");
    scanf("%d", &n);
    int a[n];
    int prime[n];
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    int q=0;
    for(j=0;j<n;j++) {
        int flag=0;
        for(i=0;i<a[j];i++) {
         if(a[j]%(i+1)==0) {
                flag++;
            }
        }
     if (flag==2) {
            prime[q]=a[j];
            q++;
        }
    }
    printf("The prime numbers are:");
    for(i=0;i<q;i++) {
        printf("\n%d\t",prime[i]);
    }
    int sum=0;
    for(i=0;i<q;i++) {
        sum=sum+prime[i];
    }
    printf("\nSum of the prime numbers: %d",sum);
    return 0;
}
