#include <stdio.h>

int main()
{
    int n,q,i;
    double a,b;
    while(scanf("%d",&n) && n!= 0)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d %lf %lf",&q,&a,&b);
            printf("Size #%d:\nIce Cream Used: %.2lf cm2\n",i,(q*5*((a+b)/2)));
        }
        printf("\n");
    }
    return 0;
}
