#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double x1,x2,y1,y2,g;
	scanf("%lf",&x1);
	scanf("%lf",&y1);
	scanf("%lf",&x2);
	scanf("%lf",&y2);
	g = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
	g = sqrt(g);
	printf("%.4lf\n", g);	
	return 0;
}
