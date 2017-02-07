#include <stdio.h>

int main()
{
    int n,l[24],c[24],i,g,count,aux,count2;
    while(scanf("%d",&n)!=EOF)
    {
        count = 0;
        count2=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&l[i]);
        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&c[i]);
        }
        for(i=0; i<n; i++)
        {
            for(g=0;g<n;g++)
            {
                if(l[i] == c[g] && i < g)
                {
                    while(i!=g)
                    {
                        aux = c[g];
                        c[g] = c[g-1];
                        c[g-1] = aux;
                        count++;
                        g--;
                        count2++;
                    }
                    g+=count2;
                    count2=0;

                }
            }
        }
        printf("%d\n",count);
    }
}
