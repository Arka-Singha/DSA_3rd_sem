#include<stdio.h>

int main()  {
    int i,j,k,l,m,z,flag=0,count=0;
    for ( i = 1; i <= 6; i++)
    {
        for ( j = 1; j <= 6; j++)
        {   if (i!=j)
            {
            for ( k = 1; k <= 6; k++)
            {   if (i!=j && j!=k && i!=k)
                {
                for ( l = 1; l <= 6; l++)
                {   
                    if(i!=j && i!=k  && i!=l && j!=k && j!=l && k!=l)
                    {
                    for ( m = 1; m <= 6; m++)
                    {
                        for(z=1;z<=6;z++)
                        {
                        if(i!=j && i!=k  && i!=l && i!=m && i!=z && j!=k && j!=l && j!=m && j!=z && k!=l && k!=m && k!=z && l!=m && l!=z && m!=z)
                        {
                            printf("%d %d %d %d %d\t\t",i,j,k,l,m);
                            if((i==1 && j!=2 && k!=3 && l!=4 && m!=5 && z!=6)||
                            (i!=1 && j==2 && k!=3 && l!=4 && m!=5 && z!=6)||
                            (i!=1 && j!=2 && k==3 && l!=4 && m!=5 && z!=6)||
                            (i!=1 && j!=2 && k!=3 && l==4 && m!=5 && z!=6)||
                            (i!=1 && j!=2 && k!=3 && l!=4 && m==5 && z!=6)||
                            (i!=1 && j!=2 && k!=3 && l!=4 && m!=5 && z==6)
                            /*||(i==1 && j!=2 && k==3 && l!=4 && m==5)||
                            (i!=1 && j==2 && k==3 && l!=4 && m==5)||
                            (i==1 && j!=2 && k!=3 && l==4 && m==5)||
                            (i!=1 && j==2 && k!=3 && l==4 && m==5)*/)
                            {
                                count++;
                            }
                            flag++;
                        }
                        }
                    }
                    }
                }
                }
            }
            
            }
        }
    }
    printf("|S|=%d",flag);
    printf("only 1 student get his/her own copy P=%d", count);
    
    return 0;
}