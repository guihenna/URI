#include <stdio.h>

int main()
{
    int a=1,b=1,c,d;
    do
    {
        scanf("%d",&a);
        scanf("%d",&b);
        d=0;
        if(a>b)
        {
            c=a;
            a=b;
            b=c;
        }
        for(c=a;c<=b;c++)
        {
            if(a<=0 || b<=0)
                break;
            printf("%d ",c);
            d+=c;
        }
        if(a<=0 || b<=0)
                break;
        printf("Sum=%d\n",d);
    }while(a!=0 && b!=0);
    return 0;
}
