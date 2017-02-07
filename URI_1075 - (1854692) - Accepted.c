#include <stdio.h>

int main()
{
    int a,x,c,i2;
    scanf("%d",&x);
    for(i2=1;i2<=10000;i2++)
    {
        if (i2%x==2)
            printf("%d\n",i2);
    }
    return 0;
}
