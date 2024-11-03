#include<stdio.h>
#include<math.h>
int main(){
    int x0, x1, v0, v1;
    scanf("%d %d %d %d",&x0, &x1, &v0, &v1 );
    //if( Test Condition )  {}
    if(x1==x0)
    {
        printf("They will meet at 0th iteration at %d",x1);
    }
    else if (v0==v1)
    {
        printf("They will never meet.");
    }
    else
    {
        if((float)((x0*v1-x1*v0)/(v1-v0)) < 0 || (float)((x0-x1)/(v1-v0)) < 0){
            printf("They will never meet.");
        }
        else{
        printf("They will meet at %.2f after %.2f steps.", (float)((x0*v1-x1*v0)/(v1-v0)), (float)((x0-x1)/(v1-v0)));
    }
    }
    return 0;
}