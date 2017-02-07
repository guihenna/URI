#include <stdio.h>

int main()
{
    int a,n=0,i,soma=0;
    scanf("%d",&a);
    while(n<=0)
    {
        scanf("%d",&n);
    }
    for (i=0;i<n;i++)
    {
        soma += a+i;
    }
    printf("%d\n",soma);
}
