#include <stdio.h>

int main()
{
    int n=1,b=1,i,j,dif,aux;
    while(n!=0 && b!=0)
    {
        if (n==0 && b==0)
        {
            break;
        }
        aux=0;
        scanf("%d",&n);
        scanf("%d",&b);
        int bv[b];
        char nv[n+1];
        for(i=0;i<b;i++)
        {
            scanf("%d",&bv[i]);
        }
        for (i=0;i<b;i++)
        {
            for (j=0;j<b;j++)
            {
                dif =0;
                dif = bv[i]-bv[j];
                if(dif<0)
                {
                    dif= 0 -dif;
                }
                nv[dif]='y';
            }
        }
        for (i=0;i<=n;i++)
        {
            if (nv[i] != 'y')
            {
                aux = 1;
            }
        }
        if (aux == 0 && n!= 0 && b!=0)
        {
            printf("Y\n");
        }
        else if (n!= 0 && b!=0)
        {
            printf("N\n");
        }
        for (i=0;i<=n;i++)
        {
            nv[i] = '\0';
        }
        for (i=0;i<b;i++)
        {
            bv[i]=0;
        }
    }
    return 0;
}
