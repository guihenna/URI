#include <stdio.h>

int main()
{
    int qt,s,vet[10],n,x,i,dif;
    scanf("%d",&n);
    for(;n>=1;n--)
    {
        dif=100;
        scanf("%d %d",&qt, &s);
        for(i = 0;i<qt;i++)
        {
            scanf("%d",&vet[i]);
            if(vet[i] > s)
            {
                if(((vet[i] - s) < (dif)) || i == 0)
                {
                    x=i;
                    dif = vet[x] - s;
                }
            }

            else
            {
                if(((s - vet[i]) < (dif)) || i == 0)
                {
                    x=i;
                    dif = s - vet[x];
                }
            }
        }
        printf("%d\n",x+1);
    }
    return 0;
}
