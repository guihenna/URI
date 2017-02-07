#include <stdio.h>

int main()
{
    double a,b,c,d,e,f;
    int aux=0;
    scanf("%lf",&a);
    if (a>0)
        aux++;
    scanf("%lf",&b);
    if (b>0)
        aux++;
    scanf("%lf",&c);
    if (c>0)
        aux++;
    scanf("%lf",&d);
    if (d>0)
        aux++;
    scanf("%lf",&e);
    if (e>0)
        aux++;
    scanf("%lf",&f);
    if (f>0)
        aux++;
    printf("%d valores positivos\n",aux);
    return 0;
}