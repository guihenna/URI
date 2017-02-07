#include <stdio.h>

int main()
{
    int x,n,maior,atual,max,i,t;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        max=0;
        atual=0;
        maior=0;
        scanf("%d",&t);
        for(; t>=1; t--)
        {
            scanf("%d",&x);
            if(x>maior)
            {
                maior = x;
                atual=1;
                max = atual;
            }
            else if(x == maior)
            {
                atual++;
            }
            else
            {
                atual=0;
            }
            if(atual>max)
                max = atual;
        }
        printf("Caso #%d: %d\n",i,max);
    }
    return 0;
}
