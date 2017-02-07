#include <stdio.h>
 
int main() {
 
    double aux=1,aux2=1;
    double b=0;
    for (aux=1;aux<=39;aux+=2)
    {
        b+=(aux/aux2);
        aux2*=2;
    }
    printf("%.2lf\n",b);
    return 0;
}
