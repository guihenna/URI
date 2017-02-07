#include <stdio.h>

int main()
{
    double a,b,c,d;
    scanf("%lf",&a);
    b = ((a-2000)*0.08);
    c = ((a-3000)*0.18);
    d = ((a-4500)*0.28);
    if(a<=2000)
        printf("Isento\n");
    else if(a<=3000)
        printf("R$ %.2lf\n",b);
    else if(a<=4500)
        printf("R$ %.2lf\n",80+c);
    else
        printf("R$ %.2lf\n",80+(1500*0.18)+d);
    return 0;
}