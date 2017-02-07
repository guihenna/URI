#include <stdio.h>
#include <string.h>

int main()
{
    int n,diferenca,i,aux;
    char a[20],b[20];
    scanf("%d",&n);
    for(;n>=1;n--)
    {
        aux = 0;
        scanf("%s %s",a,b);
        diferenca=strlen(a) - strlen(b);
        for(i=0;b[i]!='\0';i++)
        {
            if(a[diferenca+i] != b[i])
              aux =1;
        }
        if(aux == 1)
            printf("nao encaixa\n");
        else
            printf("encaixa\n");
    }
    return 0;
}
