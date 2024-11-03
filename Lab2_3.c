#include <stdio.h>
#include <stdlib.h>

struct Emp {
    char name[50];
    char gender[20];
    char designation[50];
    char department[50];
    float basicPay;
};
int main()
{


int n,i;
printf("Name - ARKA SINGHA , ROLL NO.- 2230068 , ECSc - 2\n\n");
printf("enter the number of employees: ");
scanf("%d",&n);

struct Emp * employees = (struct Emp *)malloc(n * sizeof(struct Emp));  //Dynamic --> Heap Memory
for (i=0;i<n;i++)
{
        printf("Name %d: ", i+1);
        scanf("%s", &employees[i].name);
        printf("Gender (M/F): ");
        scanf(" %s", &employees[i].gender);
        printf("Designation: ");
        scanf("%s", &employees[i].designation);
        printf("Department: ");
        scanf("%s", &employees[i].department);
        printf("Basic Pay: ");
        scanf("%f", &employees[i].basicPay);

}

 for (int i = 0; i < n; i++) {
        float bp= employees[i].basicPay;
        float gp= bp + bp*0.25 +bp*0.75;
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Gender: %s\n", employees[i].gender);
        printf("Designation: %s\n", employees[i].designation);
        printf("Department: %s\n", employees[i].department);
        printf("Basic Pay: %0.2f\n", employees[i].basicPay);
        printf("Gross Pay: %0.2f\n",gp);

    }
return 0;
}
