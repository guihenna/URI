#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char a[1000];
	double b,c;
	gets(a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	printf("TOTAL = R$ %.2lf\n",b+(c*0.15));
	return 0;
}
