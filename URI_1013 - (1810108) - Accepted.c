#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,x;
	scanf("%d",&a);
	x=a;
	scanf("%d",&b);
	if (b>x)
		x=b;
	scanf("%d",&c);
	if (c>x)
		x=c;
	printf("%d eh o maior\n", x);	
	return 0;
}
