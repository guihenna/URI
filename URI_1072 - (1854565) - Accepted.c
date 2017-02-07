#include <stdio.h>

int main()
{
    int a,x,c=0,d=0,i2;
    scanf("%d",&x);
    for(i2=1;i2<=x;i2++)
    {
        scanf("%d",&a);
        if (a>=10 && a <=20)
            c++;
        else
            d++;
    }
    printf("%d in\n",c);
    printf("%d out\n",d);
}
