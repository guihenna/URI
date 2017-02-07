#include <stdio.h>

int main()
{
    int l,i,j;
    char t;
    double m[12][12],res;
    scanf("%d ",&l);
    scanf("%c",&t);
    res=0;
    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++)
        {
            scanf("%lf",&m[i][j]);
            if(j == l)
            {
                res += m[i][j];
            }
        }
    }
    if(t == 'M')
        res = res / 12.0;
    printf("%.1lf\n",res);
    return 0;
}
