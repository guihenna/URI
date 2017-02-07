#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float valor = 0;
    int val1,val2;
    scanf("%d",&val1);
    scanf("%d",&val2);
    if (val1 == 1)
        valor = 4.00*val2;
    else if (val1 == 2)
        valor = 4.50*val2;
    else if (val1 == 3)
        valor = 5.00*val2;
    else if (val1 == 4)
        valor = 2.00*val2;
    else if (val1 == 5)
        valor = 1.50*val2;
    printf("Total: R$ %.2f\n",valor);
    return 0;
}
