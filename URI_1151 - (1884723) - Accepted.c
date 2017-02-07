#include <stdio.h>

int main()
{
    int x,i,soma=0;
    scanf("%d",&x);
    int vetor[x];
    vetor[0] = 0;
    vetor[1] = 1;
    for(i=0;i<x;i++)
    {
        if(i>1)
        {
            vetor[i] = (vetor[i-2]+vetor[i-1]);
        }
        printf("%d",vetor[i]);
        if(i==x-1)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }
}
