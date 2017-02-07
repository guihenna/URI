#include <stdio.h>

int main()
{
    int a,b=1;

    while(b!=0 && a!=0)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if (b!=0 && a!=0)
        {
            if (a>0 && b>0)
                printf("primeiro\n");
            if (a<0 && b>0)
                printf("segundo\n");
            if (a<0 && b<0)
                printf("terceiro\n");
            if (a>0 && b<0)
                printf("quarto\n");
        }
    }
    return 0;
}
