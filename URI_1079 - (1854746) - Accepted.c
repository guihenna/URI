#include <stdio.h>

int main()
{
    double a,b,c;
    int x,i2;
    scanf("%d",&x);
    for(i2=1;i2<=x;i2++)
    {
        scanf("%lf",&a);
        scanf("%lf",&b);
        scanf("%lf",&c);
        printf("%.1lf\n",(a*2+b*3+c*5)/10);
    }
    return 0;
}
