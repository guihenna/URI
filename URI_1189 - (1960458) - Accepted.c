#include <stdio.h>

int main()
{
    int i,j,aux;
    char t;
    double m[12][12],res;
    scanf("%c",&t);
    res=0;
    aux=0;
    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++)
        {
            scanf("%lf",&m[i][j]);
            if(j < 11 - i && j < i) // substituir por < para o proximo programa
            {
                res += m[i][j];
                aux++;
            }
        }
    }
    if(t == 'M')
        res = res / aux;
    printf("%.1lf\n",res);
    return 0;
}
