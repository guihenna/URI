#include <stdio.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=4*a;i++)
    {
        printf("%d ",i);
        i++;
        printf("%d ",i);
        i++;
        printf("%d ",i);
        i++;
        printf("PUM\n");
    }
}
