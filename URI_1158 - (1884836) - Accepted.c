#include <stdio.h>

int main()
{
    int a,b,c,i,i2,j,soma;
    scanf("%d",&a);
    for(i2=1;i2<=a;i2++)
    {
        soma=0;
        scanf("%d",&b);
        scanf("%d",&c);
        if(b%2==0)
        {
            i=b+1;
        }
        else
        {
            i=b;
        }
        for(j=i;j<(b+(2*c));j+=2)
        {
            soma+= j;
        }
        printf("%d\n",soma);
    }
}
