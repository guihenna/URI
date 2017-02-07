#include <stdio.h>
 
int main() {
 
    int a,aux;
    scanf("%d",&a);
    for (aux=1;aux<=a;aux++)
    {
        if (aux%2!=0)
            printf("%d\n",aux);
    }
    return 0;
}