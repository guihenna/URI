#include <stdio.h>

int main()
{
    double a,b,c,d,e,f,m;
    int aux=0;
    scanf("%lf",&a);
    if (a>0)
    {
        m+=a;
        aux++;
    }
    scanf("%lf",&b);
    if (b>0)
    {
        m+=b;
        aux++;
    }
    scanf("%lf",&c);
    if (c>0)
    {
        m+=c;
        aux++;
    }
    scanf("%lf",&d);
    if (d>0)
    {
        m+=d;
        aux++;
    }
    scanf("%lf",&e);
    if (e>0)
    {
        m+=e;
        aux++;
    }
    scanf("%lf",&f);
    if (f>0)
    {
        m+=f;
        aux++;
    }
    m=m/aux;
    printf("%d valores positivos\n",aux);
    printf("%.1lf\n",m);
    return 0;
}