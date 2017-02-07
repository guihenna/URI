#include <stdio.h>

int main()
{
    int n,vet[2001],i,x;
    scanf("%d",&n);
    for(i=1;i<=2000;i++)
        {
            vet[i] = 0;
        }
    for(;n>=1;n--)
    {
        scanf("%d",&x);
        vet[x]++;
    }
    for(i=1;i<=2000;i++)
    {
        if(vet[i] != 0)
        {
            printf("%d aparece %d vez(es)\n",i,vet[i]);
        }
    }
    return 0;
}
