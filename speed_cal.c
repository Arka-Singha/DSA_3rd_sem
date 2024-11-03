#include<stdio.h>
#include<math.h>
int main(){
    double v,m=10,g=9.8,u=0,r,d=0.254;
    for( int i=0; i<=10; i++ ) {
        printf("%lf\n\n\n",i);
        double E=i*m;
        for(r=d; r<=2*d; r=r+0.01) {
            for(u=0; u<=0.01; u=u+0.001) {
                v=sqrt(m*g*(d*(sin(d/r)-u*(cos(d/r)+E))+2*r*(-u*E*(3.14-(d/r))-u+cos(d/r)+u*sin(d/r))));
                printf("F=%lf",m*v);
                printf(" ");
    }
    printf("\n");
 }  
}
    return 0;
}