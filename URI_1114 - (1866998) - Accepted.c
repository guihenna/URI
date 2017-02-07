#include <stdio.h>

int main()
{
    int a,b=1;

    while(b!=0)
    {
        scanf("%d",&a);
        if (a==2002)
        {
            printf("Acesso Permitido\n");
            b=0;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
