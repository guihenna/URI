#include <stdio.h>

int main()
{
    int n,num,h[231],i,x,count;
    scanf("%d",&n);
    for(;n>=1;n--)
    {
        count=0;
        for(i=20;i<=230;i++)
        {
            h[i] = 0;
        }
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
            scanf("%d",&x);
            h[x]++;
        }
        for(i=20;i<=230;i++)
        {
            while(h[i] > 0)
            {
                count++;
                printf("%d",i);
                if(count == num)
                    printf("\n");
                else
                    printf(" ");
                h[i]--;
            }
        }
    }
    return 0;
}
