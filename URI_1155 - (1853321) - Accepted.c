#include <stdio.h>
 
int main() {
 
    int aux;
    double b=0;
    for (aux=1;aux<=100;aux++)
    {
        b+=(1.0/aux);
    }
    printf("%.2lf\n",b);
    return 0;
}