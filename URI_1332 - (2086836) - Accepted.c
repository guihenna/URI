#include <stdio.h>
#include <string.h>

int main()
{
    char a[6];
    int n;
    scanf("%d",&n);
    for(;n>=1;n--)
    {
        memset(a,0,sizeof(a));
        scanf("%s",a);
        if(strlen(a) == 5)
            printf("3\n");
        else
        {
            if((a[0] == 't' && (a[1] == 'w' || a[2] == 'o')) || (a[1] == 'w' && (a[0] == 't' || a[2] == 'o')) || (a[2] == '0' && (a[1] == 'w' || a[0] == 't')))
                printf("2\n");
            else
                printf("1\n");
        }
    }
    return 0;
}
