#include <stdio.h>
#include <stdlib.h>
#include <math.h>
   
int main(){
      
    double A, val1;
    double pi = 3.14159;
    scanf("%lf", &val1);
    A = val1 * val1 * pi;
    printf("A=%.4lf\n", A);
    return 0;
}