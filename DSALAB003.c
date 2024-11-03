#include<stdio.h>
int main()  {
    double a,b; 
    int flag=1;
    printf("\nenter a: ");
    scanf("%lf",&a);
    printf("enter b: ");
    scanf("%lf",&b);
    while(flag) {
        char operation;
        printf("\nEnter an operation(+,-,*,/,'.' for terminate):");
        scanf(" %c",&operation);
        switch (operation) //MENU DRIVEN PROGRAM    
        {

            case '+':
            {
            printf("%lf+%lf=%lf",a,b,a+b);
            break;
            }

            case '-':
            {
            printf("%lf-%lf=%lf",a,b,a-b);
            break;
            }

            case '*':
            {
            printf("%lf*%lf=%lf",a,b,a*b);
            break;
            }
            case '/':
            {
            if (b != 0) {
                printf("%lf / %lf = %lf", a, b, a / b);
            }
                else if (b==0||a==0) {
                printf("Undefined");
                }
                else {
                printf("Infinity");
                }
                break;
            }

            case '.':
            {
                flag--;
                printf("Termination occured.");
                break;
            }
            default:
            printf(" Error");
            }
            

        }
    return 0;
    }
