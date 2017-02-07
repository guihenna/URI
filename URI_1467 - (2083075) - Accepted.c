#include <stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c) != EOF)
    {
        if(b==c && a!=b)
            printf("A\n");
        else if(a==c && a!=b)
            printf("B\n");
        else if(b==a && c!=b)
            printf("C\n");
        else
            printf("*\n");
    }
    return 0;
}
