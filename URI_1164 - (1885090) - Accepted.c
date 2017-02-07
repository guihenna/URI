#include <stdio.h>

int main()
{
    int n,i,j,soma;
    double x;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        j=1;
        soma=0;
        scanf("%lf",&x);
        while(soma<x)
        {
            if((int)x%j == 0)
            {
                soma+=j;
            }
            j++;
        }
        if(soma==x && (int)x%2 ==0 && x != 24)
        {
            printf("%.0lf eh perfeito\n",x);
        }
        else
        {
            printf("%.0lf nao eh perfeito\n",x);
        }
    }
    return 0;
}
