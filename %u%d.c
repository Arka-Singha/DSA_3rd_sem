#include<stdio.h>

int main(){
    int r=-2;
    printf("1. %d", r);
    printf("\n2. %d", &r);
    printf("\n2. %u", r);
    printf("\n2. %u", &r);

    return 0;
}