#include <stdio.h>

int main ()
{
    int par[5],impar[5],p=0,i=0,j,n,k;
    for(j=0; j<=14; j++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            par[p] = n;
            p++;
        }
        else
        {
            impar[i] = n;
            i++;
        }
        if(i == 5)
        {
            for(k=0; k<i; k++)
            {
                printf("impar[%d] = %d\n",k,impar[k]);
            }
            i=0;
        }
        if(p == 5)
        {
            for(k=0; k<p; k++)
            {
                printf("par[%d] = %d\n",k,par[k]);
            }
            p=0;
        }
    }
    for(k=0; k<i; k++)
    {
        printf("impar[%d] = %d\n",k,impar[k]);
    }
    for(k=0; k<p; k++)
    {
        printf("par[%d] = %d\n",k,par[k]);
    }
    return 0;
}
