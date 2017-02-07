#include <stdio.h>
#include <math.h>
#include <string.h>

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

int main()
{
    int a,m,i,j,k,numero,aux,b;
    scanf("%d",&a);
    numero = 4;
    b = a;
    for(a=b;a>0;a--)
    {
        scanf("%d",&m);
        unsigned long long matriz[m][m];
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                scanf("%llu",&matriz[i][j]);
                matriz[i][j]=matriz[i][j]*matriz[i][j];
            }
        }
        if (a!= b)
        {
            printf("\n");
        }
        printf("Quadrado da matriz #%d:\n",numero);
        numero++;
        unsigned long long maior[m];
        for (i=0;i<m;i++)
        {
            maior[i] = 0;
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                if(matriz[i][j] >= maior[j])
                {
                    maior[j] = matriz[i][j];
                }
            }
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                aux = espacos(matriz[i][j],maior[j]);
                for(k=0;k<aux;k++)
                {
                    printf(" ");
                }
                printf("%llu",matriz[i][j]);
                if(j == m-1)
                {
                    printf("\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }

    }
    return 0;
}