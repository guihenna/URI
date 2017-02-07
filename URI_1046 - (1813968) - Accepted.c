#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a<b)
    {
        c=b-a;
    }
    else
    {
        c=24-a+b;
    }
    printf("O JOGO DUROU %d HORA(S)\n",c);
    return 0;
}