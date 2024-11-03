#include<stdio.h>

    void replace(int *ptr,int n)
        {
            for(int i=0; i<n; i++)
            {
                if(ptr[i]%2==0)
                ptr[i]=0;
                else
                    ptr[i]=1;
            }
        }
    void main()
    {
        int a[]={21,42,11,83,69};
        int n=5;
        replace(a[5]);
        for(int i=0; i<n; i++)
        {
            printf("%d\t",a[i]);
        }
    }