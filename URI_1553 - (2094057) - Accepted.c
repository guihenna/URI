#include <stdio.h>
#include <string.h>

int main()
{
    int p[100],n,k,count,i,x;
    while(1)
    {
        scanf("%d %d",&n,&k);
        if(n == 0 && k == 0)
            break;
        memset(p,0,sizeof(p));
        count=0;
        for(;n>=1;n--)
        {
            scanf("%d",&x);
            p[x-1]++;
        }
        for(i=0;i<100;i++)
        {
            if(p[i] >= k)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
