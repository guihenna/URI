#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float val;
    scanf("%f",&val);
    if (val < 0)
        printf("Fora de intervalo\n");
    else if (val <= 25.00)
        printf("Intervalo [0,25]\n");
    else if (val <= 50.00)
        printf("Intervalo (25,50]\n");
    else if (val <= 75.00)
        printf("Intervalo (50,75]\n");
    else if (val <= 100.00)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");
    return 0;
}
