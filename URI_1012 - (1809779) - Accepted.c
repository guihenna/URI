#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a,b,c;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	printf("TRIANGULO: %.3lf\n", (a*c)/2);	
	printf("CIRCULO: %.3lf\n", 3.14159*c*c);
	printf("TRAPEZIO: %.3lf\n",((a+b)/2)*c);
	printf("QUADRADO: %.3lf\n",b*b);
	printf("RETANGULO: %.3lf\n",a*b);
	return 0;
}
