#include <stdio.h>

int main()
{
    double a,b=0,c=0,d=0,k=0;
    while (k==0)
    {
        d=0;
        c=0;
        while(b!=2)
        {
            scanf("%lf",&a);
            if (a<0 || a>10)
            {
                printf("nota invalida\n");
            }
            else
            {
                c+=a;
                b++;
            }
        }
        printf("media = %.2lf\n",c/2);
        while(d==0)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%lf",&d);
            if(d!=1 && d!=2)
                d=0;
            if (d==2)
                k=1;
            if (d==1)
                b=0;
        }
    }
    return 0;
}
