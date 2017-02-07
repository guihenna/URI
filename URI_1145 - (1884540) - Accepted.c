#include <stdio.h>

int main()
{
    int a,b,i;
    scanf("%d",&b);
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d",i);
        if (i%b == 0 || i == a)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}
