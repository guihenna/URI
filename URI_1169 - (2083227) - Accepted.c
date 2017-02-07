#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long g;
    int i, n, c, j;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        g=0;
        scanf("%d",&c);
        for(j=0; j<c; j++)
        {
            g+= pow(2,j);
        }
        if(c==64)
            printf("1537228672809129 kg\n");
        else
            printf("%llu kg\n",(g/12)/1000);
    }
    return 0;
}
