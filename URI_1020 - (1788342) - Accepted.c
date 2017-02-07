#include <stdio.h>
#include <stdlib.h>
#include <math.h>
   
int main(){
      
    int dias, meses, anos, val;
    scanf("%d", &val);
    anos = val / 365;
    meses = (val % 365) / 30;
    dias = (val % 365) % 30;
    printf("%d ano(s)\n",anos);
    printf("%d mes(es)\n",meses);
    printf("%d dia(s)\n",dias);
    return 0;
}