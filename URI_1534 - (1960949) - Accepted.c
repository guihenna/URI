#include <stdio.h>

int main()
{
    int n,i,j,s;
    while(scanf("%d",&n)!= EOF)
    {
        if(n ==0)
            break;
        int matriz[n][n],cont=1,ini = 0, fim = n-1;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                s=n-1-j;
                if (i==j)
                {
                    matriz[i][j]=1;
                }
                if (i==s)
                {
                    matriz[i][j]=2;
                }
                if (i==s && i==j)
                {
                    matriz[i][j]=2;
                }
                if(i!=s && i!=j)
                {
                    matriz[i][j]=3;
                }
                if(j<n-1)
                    printf("%d",matriz[i][j]);
                else
                    printf("%d\n",matriz[i][j]);
            }
        }
        //printf("\n");
    }

    return 0;
}
