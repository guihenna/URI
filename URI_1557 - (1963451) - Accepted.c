#include <stdio.h>
#include <math.h>

int espacos (unsigned long long x2, unsigned long long y2)
{
    int res,cont1=0,cont2=0;
    unsigned long long x = x2;
    unsigned long long y = y2;
    if (x ==0)
        cont1++;
    else
    {
        while(x>0)
        {
            x-= x%10;
            x = x/10;
            cont1++;
        }
    }
    if (y ==0)
        cont2++;
    else
    {
        while(y>0)
        {
            y-= y%10;
            y = y/10;
            cont2++;
        }
    }
    res = cont2 - cont1;
    return res;
}

int main ()
{
    int n=1,i,j,k;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        unsigned long long m[n][n],maior=0;
        int aux;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                m[i][j]=(pow(2,i))*(pow(2,j));
                if(maior <= m[i][j])
                    maior = m[i][j];

            }
        }
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                aux = espacos(m[i][j],maior);
                for(k=0;k<aux;k++)
                {
                    printf(" ");
                }
                printf("%llu",m[i][j]);
                if(j == n-1)
                {
                    printf("\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
