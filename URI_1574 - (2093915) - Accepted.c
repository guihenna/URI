#include <stdio.h>
#include <string.h>

int main()
{
    char c[100][12];
    int p,t,n,i,j,x;
    scanf("%d",&t);
    for(;t>=1;t--)
    {
        p=0;
        for(i=0;i<100;i++)
            for(j=0;j<12;j++)
                c[i][j] = 0;

        scanf("%d ",&n);
        for(i=0;i<n;i++)
        {
            gets(c[i]);
            if(strlen(c[i]) > 5)
            {
                if(strlen(c[i]) == 9)
                {
                    x = (int)c[i][8] - '0';
                }

                else if(strlen(c[i]) == 10)
                {
                    x = ((int)c[i][8] - '0')*10 + ((int)c[i][9] - '0');
                }

                else
                {
                    x = 100;
                }
                strcpy(c[i],c[x-1]);
            }
            if(strlen(c[i]) == 4)
                p--;
            else
                p++;
        }
        printf("%d\n",p);
    }
    return 0;
}
