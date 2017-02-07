#include <stdio.h>
#include <string.h>

int lin[9][9],col[9][9],quad[9][9],aux;

void ler(int vet[][9], int ini, int fim)
{
    int i,j;
    for(i=ini; i<fim; i++)
    {
        for(j=0; j<9; j++)
        {
            scanf("%d",&vet[i][j]);
            col[vet[i][j]-1][j]++;
            lin[i][vet[i][j]-1]++;
            if(i<3)
            {
                if(j<3)
                {
                    quad[0][vet[i][j]-1]++;
                }
                else if(j<6)
                {
                    quad[1][vet[i][j]-1]++;
                }
                else if(j<9)
                {
                    quad[2][vet[i][j]-1]++;
                }
            }
            else if(i<6)
            {
                if(j<3)
                {
                    quad[3][vet[i][j]-1]++;
                }
                else if(j<6)
                {
                    quad[4][vet[i][j]-1]++;
                }
                else if(j<9)
                {
                    quad[5][vet[i][j]-1]++;
                }
            }
            else if(i<9)
            {
                if(j<3)
                {
                    quad[6][vet[i][j]-1]++;
                }
                else if(j<6)
                {
                    quad[7][vet[i][j]-1]++;
                }
                else if(j<9)
                {
                    quad[8][vet[i][j]-1]++;
                }
            }
        }
    }
}

int main()
{
    int vet[9][9],i,j,n,k;
    scanf("%d",&n);
    for(k=1; k<=n; k++)
    {
        aux=0;
        memset(lin,0,sizeof(lin));
        memset(col,0,sizeof(col));
        memset(quad,0,sizeof(quad));
        ler(vet,0,3);
        ler(vet,3,6);
        ler(vet,6,9);
        for(i=0; i<9; i++)
        {
            for(j=1; j<9; j++)
            {
                if(lin[i][j]>1 || col[i][j]>1 || quad[i][j]>1)
                {
                    aux = 1;
                    break;
                }
            }
        }
        if(aux == 1)
            printf("Instancia %d\nNAO\n\n",k);
        else
            printf("Instancia %d\nSIM\n\n",k);
    }
    return 0;
}
