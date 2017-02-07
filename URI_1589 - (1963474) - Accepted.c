#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        printf("%d\n",a+b);
    }
    return 0;
}
