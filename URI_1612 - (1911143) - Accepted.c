#include <stdio.h>

int main()
{
    int t,n,k,i;
    scanf("%d",&t);
    while(t>=1)
    {
        scanf("%d",&n);
        if(n%2 == 0)
        {
            printf("%d\n",n/2);
        }
        else
        {
            printf("%d\n",n/2+1);
        }
        t--;
    }
    return 0;
}
