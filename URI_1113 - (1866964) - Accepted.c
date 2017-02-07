#include <stdio.h>

int main()
{
    int a=1,b=1,c,d;
    do
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a==b)
            break;
        if(a>b)
        {
            printf("Decrescente\n");
        }
        if (a<b)
        {
            printf("Crescente\n");
        }
    }while(a!=b);
    return 0;
}
