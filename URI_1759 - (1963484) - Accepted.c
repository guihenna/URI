#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Ho");
        if(i ==n)
            printf("!\n");
        else
            printf(" ");
    }
    return 0;
}
