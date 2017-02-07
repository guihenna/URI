#include <stdio.h>

int main()
{
    int n;
    double area, x, y;
    scanf("%d",&n);
    for(;n >= 1; n--)
    {
        scanf("%lf %lf",&x, &y);
        area = x*(y/2.0);
        if ((int)x%2 != 0 && (int)y%2 != 0)
            area-=0.5;

        printf("%.0lf cm2\n",area);
    }
    return 0;
}
