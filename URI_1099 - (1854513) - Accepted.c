#include <stdio.h>

int main()
{
    int a,b,x,c=0,aux,i,i2;
    scanf("%d",&x);
    for(i2=1;i2<=x;i2++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if (a>b)
        {
            aux=a;
            a=b;
            b=aux;
        }
        for(i=a+1;i<b;i++)
        {
            if(i%2!=0)
                c+=i;
        }
        printf("%d\n",c);
        c=0;
    }
}
