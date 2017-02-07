#include <stdio.h>
 
int main() {
 
    int a,aux;
    scanf("%d",&a);
    for (aux=a;aux<a+12;aux++)
    {
        if (aux%2!=0)
            printf("%d\n",aux);
    }
    return 0;
}