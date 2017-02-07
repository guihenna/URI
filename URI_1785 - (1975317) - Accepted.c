#include <stdio.h>

int maior(int x)
{
    int i[4],j,k,aux;
    i[0] = x/1000;
    i[1] = (x%1000)/100;
    i[2] = (x%100)/10;
    i[3] = x%10;
    for(j=0; j<=3; j++)
    {
        for(k=0; k<=3; k++)
        {
            if(j>k && i[j] > i[k])
            {
                aux = i[j];
                i[j] = i[k];
                i[k] = aux;
            }
        }
    }
    return (1000*i[0])+(100*i[1])+(10*i[2])+i[3];
}

int menor(int x)
{
    int i[4],j,k,aux;
    i[0] = x/1000;
    i[1] = (x%1000)/100;
    i[2] = (x%100)/10;
    i[3] = x%10;
    for(j=0; j<=3; j++)
    {
        for(k=0; k<=3; k++)
        {
            if(j<k && i[j] > i[k])
            {
                aux = i[j];
                i[j] = i[k];
                i[k] = aux;
            }
        }
    }
    return (1000*i[0])+(100*i[1])+(10*i[2])+i[3];
}

int main()
{
    int i,count=0,n,l;
    scanf("%d",&n);
    for(l=1; l<=n; l++)
    {
        count=0;
        scanf("%d",&i);
        while(i != 6174)
        {
            if(i == 0)
            {
                count= -1;
                break;
            }
            i = maior(i) - menor(i);
            count++;
        }
        printf("Caso #%d: %d\n",l,count);
    }
    return 0;
}
