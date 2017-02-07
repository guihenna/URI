#include <stdio.h>
#include <string.h>

int main()
{
    int n, a[9],lider,i,j,count,t,x;
    scanf("%d",&n);
    for(i = 1; i <= n;i++)
    {
        count=0;
        memset(a,0,sizeof(a));
        scanf("%d",&t);
        for(j=0;j<t;j++)
        {
            scanf("%d",&x);
            a[x-11] = 1;
        }
        for(j=0;j<9;j++)
        {
            if(a[j] == 1)
                count++;
            if(count == t/2+1)
            {
                printf("Case %d: %d\n",i,j+11);
                break;
            }
        }
    }
    return 0;
}
