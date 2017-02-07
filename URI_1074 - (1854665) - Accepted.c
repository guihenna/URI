#include <stdio.h>

int main()
{
    int a,x,c,i2;
    scanf("%d",&x);
    for(i2=1;i2<=x;i2++)
    {
        scanf("%d",&a);
        if (a<0)
        {
            if (a%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
        else if (a>0)
        {
            if (a%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else
            printf("NULL\n");
    }
    return 0;
}