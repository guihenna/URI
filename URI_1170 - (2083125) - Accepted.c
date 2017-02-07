#include <stdio.h>

int main()
{
    int n,dias;
    double comida;
    scanf("%d",&n);
    for(; n>=1; n--)
    {
        dias =0;
        scanf("%lf",&comida);
        while(comida>1)
        {
            comida/=2;
            dias++;
        }
        printf("%d dias\n",dias);
    }
    return 0;
}
