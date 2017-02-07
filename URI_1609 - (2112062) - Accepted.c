#include <stdio.h>
#include <string.h>

int main()
{
    unsigned long long carneiro,t,n,i,j,x[10000];
    int count,aux;
    scanf("%llu",&t);
    for(;t>=1;t--)
    {
        count = 0;
        memset(x,0,sizeof(x));
        scanf("%llu",&n);
        for(i=0;i<n;i++)
        {
            aux=0;
            scanf("%llu",&carneiro);
            for(j=0;j<i;j++)
            {
                if(x[j] == carneiro)
                    aux=1;
            }
            x[i]= carneiro;
            if(aux==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
