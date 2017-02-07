#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char desenho[51][51];
    int n,m,a,b,i,j,k,l;
    while(scanf("%d %d",&n, &m) && n != 0 && m != 0)
    {
        for(i=0; i<n; i++)
        {
            scanf("%s ",desenho[i]);
        }
        scanf("%d %d",&a, &b);
        for(i=0; i<n; i++)
        {
            for(k=0; k<(a/n); k++)
            {
                for(j=0; j<m; j++)
                {
                    for(l=0; l<(b/m); l++)
                    {
                        printf("%c", desenho[i][j]);
                    }
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
