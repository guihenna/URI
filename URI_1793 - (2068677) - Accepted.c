#include <stdio.h>
#include <string.h>

int main()
{
    int n=0,t[1010],i,x,count;
    while(n == 0)
    {
        count = 0;
        scanf("%d",&n);
        if(n == 0)
            break;
        memset(t,0,sizeof(t));
        for(; n >= 1; n--)
        {
            scanf("%d",&x);
            for(i = 0; i < 10; i++)
                t[x+i-1] = 1;
        }
        for(i = 0; i < 1010; i++)
        {
            if(t[i] > 0)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
