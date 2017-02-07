#include <stdio.h>

int main()
{
    int a,maior=0,m=0,i2;
    for(i2=1;i2<=100;i2++)
    {
        scanf("%d",&a);
        if (a>maior)
        {
            maior = a;
            m = i2;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",m);
    return 0;
}
