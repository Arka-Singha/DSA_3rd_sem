#include<stdio.h>
#include<math.h>
int main(){
    float L=1, C1=0.0000000003, C2=0.000000000018, F1, F2;
    int c;
    for(c=5; c>0 ;c++)
    {
        c--;
        F1=1/(2*3.14*sqrt(L*C1));
        F2=1/(2*3.14*sqrt(L*C2));

        printf("%f <F<%f\n", F1, F2);

        if(F2<88000000 && F1>108000000)
        {
            printf("\nFound at %f", L);
            break;
        }
        L = L/1.5;
    }
    return 0;
}