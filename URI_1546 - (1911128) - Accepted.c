#include <stdio.h>

int main()
{
    int t,n,k,i;
    scanf("%d",&t);
    while(t>=1)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&k);
            switch(k)
            {
            case 1:
                {
                    printf("Rolien\n");
                    break;
                }
            case 2:
                {
                    printf("Naej\n");
                    break;
                }
            case 3:
                {
                    printf("Elehcim\n");
                    break;
                }
            case 4:
                {
                    printf("Odranoel\n");
                    break;
                }
            }
        }
        t--;
    }
    return 0;
}
