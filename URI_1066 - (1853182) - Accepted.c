#include <stdio.h>
 
int main() {
 
    int a,b,c,d,e,aux=0,aux2=0,aux3=0,aux4=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    if(a%2==0)
        aux++;
    else
        aux2++;
    if(b%2==0)
        aux++;
    else
        aux2++;
    if(c%2==0)
        aux++;
    else
        aux2++;
    if(d%2==0)
        aux++;
    else
        aux2++;
    if(e%2==0)
        aux++;
    else
        aux2++;
    if (a<0)
        aux3++;//negativos
    else if(a>0)
        aux4++;
    if (b<0)
        aux3++;
    else if(b>0)
        aux4++;
    if (c<0)
        aux3++;
    else if(c>0)
        aux4++;
    if (d<0)
        aux3++;
    else if(d>0)
        aux4++;
    if (e<0)
        aux3++;
    else if(e>0)
        aux4++;
    printf("%d valor(es) par(es)\n",aux);
    printf("%d valor(es) impar(es)\n",aux2);
    printf("%d valor(es) positivo(s)\n",aux4);
    printf("%d valor(es) negativo(s)\n",aux3);
    return 0;
}