#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d,x=0,y;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if (d>=b)
    {
        y=d - b;
    }
    else
    {
        y=60-b+d;
        x--;
    }
    if (a<c)
    {
        x+=c-a;
    }
    else
    {
        x+=24-a+c;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
    return 0;
}