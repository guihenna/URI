#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a=1,b=0;
    while(a+b != 0)
    {
        scanf("%d %d",&a,&b);
        if(a != 0 && b != 0)
            printf("%d\n",a+b);
    }
    return 0;
}