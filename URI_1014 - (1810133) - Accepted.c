#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	double b,x;
	scanf("%d",&a);
	scanf("%lf",&b);
	x = (float) a/b;
	printf("%.3lf km/l\n", x);	
	return 0;
}
