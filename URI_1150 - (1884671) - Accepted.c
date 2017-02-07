#include <stdio.h>

int main()
{
    int x,z=0,i,soma=0;
    scanf("%d",&x);
    while(z<=x)
    {
        scanf("%d",&z);
    }
    i=x;
    while(soma<=z)
    {
        soma += i;
        i++;
    }
    printf("%d\n",i-x);
}
