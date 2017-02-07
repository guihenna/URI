#include <stdio.h>

int main()
{
    int lin,col,i,n;
    unsigned long long count, count2;
    scanf("%d",&n);
    for(;n>=1;n--)
    {
        count=0;
        count2=0;
        scanf("%d %d",&lin,&col);
        for(i=2;i<lin;i+=3)
        {
            count++;
        }
        for(i=2;i<col;i+=3)
        {
            count2++;
        }
        printf("%llu\n",count*count2);
    }
}
