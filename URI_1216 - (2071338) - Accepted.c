#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    double n, res=0;
    int count=0;
    char a[1000];
    while(scanf("%[^\n]s",a) != EOF)
    {
        scanf("%lf",&n);
        count++;
        res += n;
        n=0;
    }
    printf("%.1lf\n",res/((count/2)+1));
    return 0;
}
