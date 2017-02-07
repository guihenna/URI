#include <stdio.h>

int main()
{
    int n,i,j;
    while(scanf("%d",&n)!= 0)
    {
        if(n ==0)
            break;
        int matriz[n][n],cont=1,ini = 0, fim = n-1;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i<j)
                    matriz[i][j] = j - i + 1;
                else
                    matriz[i][j] = i - j + 1;
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
