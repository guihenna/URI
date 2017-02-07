#include <stdio.h>

int main()
{
    int a,b,c,i;
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if (b==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n",(double) a/b);
        }
    }
    return 0;
}
