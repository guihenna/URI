#include <stdio.h>
 
int main() {
 
    int cod1,cod2,un1,un2;
    float val1,val2,valor;
    scanf("%d",&cod1);
    scanf("%d",&un1);
    scanf("%f",&val1);
    scanf("%d",&cod2);
    scanf("%d",&un2);
    scanf("%f",&val2);
    valor = val1*un1 + val2*un2;
    printf("VALOR A PAGAR: R$ %.2f\n",valor);
 
    return 0;
}