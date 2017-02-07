#include <stdio.h>

int main()
{
    int n,i,j,x,soma,aux;
    scanf("%d",&n);
    for (j=1;j<=n;j++)
    {
        aux=0;
        scanf("%d",&x);
        for(i = 2; i < x; i++)
        {
            if (x%i == 0)
            {
                aux =1;
                break;
            }
        }
        if (aux==0)
        {
            printf("%d eh primo\n",x);
        }
        else
        {
            printf("%d nao eh primo\n",x);
        }
    }
    return 0;
}
