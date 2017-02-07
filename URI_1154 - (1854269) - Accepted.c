#include <stdio.h>

int main()
{
    int a=1,i,aux=0;
    double aux2=0;
    while (a>0)
    {
        scanf("%d",&a);
        if(a>0){
            aux+=a;
            aux2++;
        }
    }
    if (aux2>0)
        printf("%.2lf\n",aux/aux2);
    else
        printf("0.00\n");
}
