#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned long long x,i,j,aux;
    int n;
    scanf("%d",&n);
    for(;n>=1;n--)
    {
        aux = 1;
        scanf("%llu",&x);
        for(i=2;i<=(int)sqrt(x);i+=2)
        {
            if(x%i == 0)
            {
                aux = 0;
                break;
            }

            if(i == 2)
                i++;
        }
        if(x == 2)
            aux = 1;
        if(aux == 0)
            printf("Not Prime\n");
        else
            printf("Prime\n");
    }
    return 0;
}
