#include <stdio.h>

int main()
{
    int a,b,c=0,aux,i;
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
}