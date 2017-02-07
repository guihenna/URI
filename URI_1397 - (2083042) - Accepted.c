#include <stdio.h>

int main()
{
    int n,x,y,count1,count2;
    while(1)
    {
        count1 =0;
        count2 =0;
        scanf("%d",&n);
        if(n==0)
            break;
        for(;n>=1;n--)
        {
            scanf("%d %d",&x,&y);
            if(x>y)
                count1++;
            else if(y>x)
                count2++;
        }
        printf("%d %d\n",count1,count2);
    }
}
