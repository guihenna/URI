#include <stdio.h>

int main ()
{
    int i,t,j=0;
    scanf("%d",&t);
    for(i=0;i<=999;i++)
    {
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==t)
            j=0;
    }
    return 0;
}
