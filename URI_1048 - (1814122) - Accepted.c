#include <stdio.h>
#include <math.h>

int main()
{
    double a, novo, reajuste;
    int perc;
    scanf("%lf",&a);
    if (a<=400)
    {
        perc = 15;
    }
    
    else if (a<=800)
    {
        perc = 12;
    }
    else if (a<=1200)
    {
        perc = 10;
    }
    else if (a<=2000)
    {
        perc = 7;
    }
    else
    {
        perc = 4;
    }
    reajuste = ((double) perc/100) * a;
    novo = a + reajuste;
    printf("Novo salario: %.2lf\n",novo);
    printf("Reajuste ganho: %.2lf\n",reajuste);
    printf("Em percentual: %d %\n",perc);
    return 0;
}