#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a;
	double b;
	scanf("%d",&a);
	b = (4.0/3.0)*3.14159*a*a*a;
	printf("VOLUME = %.3lf\n",b);
	return 0;
}
