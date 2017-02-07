#include <stdio.h>

int main ()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m;
        scanf("%d",&m);
        unsigned long long fib[m+1];
        fib[0] = 0;
        fib[1] = 1;
        for(j=2;j<=m;j++)
        {
            fib[j]=fib[j-1]+fib[j-2];
        }
        printf("Fib(%d) = %llu\n",m,fib[m]);
    }
    return 0;
}
