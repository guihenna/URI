#include <stdio.h>

int main()
{
    int n,i,j;
    while(scanf("%d",&n)!= 0)
    {
        if(n ==0)
            break;
        int matriz[n][n],cont=1,ini = 0, fim = n-1;
        for(j = 0; j < (n+1) / 2; j++){
            for(i = ini; i <= fim; i++){
                matriz[i][ini] = cont;
                matriz[ini][i] = cont;
                matriz[i][fim] = cont;
                matriz[fim][i] = cont;
            }
            cont++;
            ini++;
            fim--;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j<n-1)
                    printf("%3d ",matriz[i][j]);
                else
                    printf("%3d\n",matriz[i][j]);
            }
        }
         printf("\n");
    }

    return 0;
}
