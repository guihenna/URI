#include <stdio.h>
 
int main() {
 
    int a,b,c,d,e,aux=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    if(a%2==0)
        aux++;
    if(b%2==0)
        aux++;
    if(c%2==0)
        aux++;
    if(d%2==0)
        aux++;
    if(e%2==0)
        aux++;
    printf("%d valores pares\n",aux);
    return 0;
}