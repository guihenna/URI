#include <stdio.h>
 
int main() {
 
    int tempo,vel;
    float valor;
    scanf("%d",&tempo);
    scanf("%d",&vel);
    valor = (float) (vel*tempo)/12;
    printf("%.3f\n",valor);
 
    return 0;
}