#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,aux;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    //abc
    if(a>=c && c>=b)//acb
    {
        aux=c;
        c=b;
        b=aux;
    }
    else if(b>=a && a>=c)//bac
    {
        aux=a;
        a=b;
        b=aux;
    }
    else if(b>=c && c>=a)//bca
    {
        aux=c;
        c=a;
        a=b;
        b=aux;
    }
    else if(c>=b && b>=a)//cba
    {
        aux=c;
        c=a;
        a=aux;
    }
    else if(c>=a && a>=b)//cab
    {
        aux=c;
        c=b;
        b=a;
        a=aux;
    }
    if(a>= (b+c))
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        if (a*a == (b*b) + (c*c))
            printf("TRIANGULO RETANGULO\n");
        else if (a*a > b*b + c*c)
            printf("TRIANGULO OBTUSANGULO\n");
        else if (a*a < ((b*b) + (c*c)))
            printf("TRIANGULO ACUTANGULO\n");
        if (a==b && b==c)
            printf("TRIANGULO EQUILATERO\n");
        else if (a==b || b==c || a==c)
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}