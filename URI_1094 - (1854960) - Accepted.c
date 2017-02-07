#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,x,c=0,s=0,r=0,y=0,i;
    char k;
    double dc=0,ds=0,dr=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d",&a);
        scanf("%c",&k);
        scanf("%c",&k);
        if(k=='C')
            c+=a;
        if(k=='R')
            r+=a;
        if(k=='S')
            s+=a;
        y+=a;
    }
    dc = (c*100.00)/y;
    dr = (r*100.00)/y;
    ds = (s*100.00)/y;
    printf("Total: %d cobaias\n",y);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2lf %\n",dc);
    printf("Percentual de ratos: %.2lf %\n",dr);
    printf("Percentual de sapos: %.2lf %\n",ds);
    return 0;
}
