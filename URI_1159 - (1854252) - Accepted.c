#include <stdio.h>

int main()
{
    int a=9,i,aux;
    
    while (a!=0)
    {
        aux=0;
        scanf("%d",&a);
        if (a == 0)
            break;
        for(i=a;i<a+10;i++)
        {
            if(i%2==0)
                aux+=i;
        }
        printf("%d\n",aux);
    }
}
