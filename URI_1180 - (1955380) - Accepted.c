#include <stdio.h>

int main()
{
    int n,i,menor, in=0;
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
        if(i==0)
            menor = v[i];
        if(menor > v[i])
        {
            menor= v[i];
            in = i;
        }
    }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",in);
    return 0;
}
