#include <stdio.h>

int main()
{
    int x,c,i2;
    scanf("%d",&x);
    for(i2=2;i2<=x;i2+=2)
    {
        c=i2*i2;
        printf("%d^2 = %d\n",i2,c);
    }

}
