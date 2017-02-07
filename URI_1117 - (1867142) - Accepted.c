#include <stdio.h>

int main()
{
    double a,b=0,c=0;
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
    return 0;
}
