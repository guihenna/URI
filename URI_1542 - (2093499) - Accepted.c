#include <stdio.h>

int main()
{
    int q, d, p;
    double x;
    while(1)
    {
        scanf("%d",&q);
        if(q==0)
            break;
        scanf("%d %d",&d,&p);
        x = (double)(q*d)/-(q-p);
        x = (x+d)*q;
        if((int)x > x)
            x-=0.5;
        if((int)x == 1)
            printf("%d pagina\n",(int)x);
        else
            printf("%d paginas\n",(int)x);
    }
    return 0;
}
