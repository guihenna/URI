#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    if (a<b+c && b<c+a && c<a+b)
    {
        printf("Perimetro = %.1lf\n",a+b+c);
    }
    else
    {
        printf("Area = %.1lf\n",((a+b)/2)*c);
    }
    return 0;
}