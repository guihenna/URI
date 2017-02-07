#include <stdio.h>

int main()
{
    int n,i;
    while(scanf("%d",&n) != EOF)
    {
        int v[n],maior=0;
        for (i=0;i<n;i++)
        {
            scanf("%d",&v[i]);
            if(maior<v[i])
                maior=v[i];
        }
        if(maior<10)
            printf("1\n");
        else if(maior<20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}
