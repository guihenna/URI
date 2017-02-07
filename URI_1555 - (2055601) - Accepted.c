#include <stdio.h>

int r(x,y)
{
    return ((3*x)*(3*x)) + (y*y);
}

int b(x,y)
{
    return (2*(x*x)) + ((5*y)*(5*y));
}

int c(x,y)
{
    return ((-100)*x) + (y*y*y);
}

int main()
{
    int n, x, y;
    scanf("%d",&n);
    for(;n >= 1; n--)
    {
        scanf("%d %d",&x, &y);
        if(r(x,y) > b(x,y) && r(x,y) > c(x,y))
            printf("Rafael ganhou\n");
        else if(b(x,y) > c(x,y))
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }
    return 0;
}