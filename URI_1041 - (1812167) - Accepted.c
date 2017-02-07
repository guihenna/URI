#include <stdio.h>
#include <math.h>

int main()
{
    double a,b;
    scanf("%lf",&a);
    scanf("%lf",&b);
    
	if(a>0 && b>0)
	    printf("Q1\n");
	if(a<0 && b>0)
	    printf("Q2\n");
	if(a<0 && b<0)
	    printf("Q3\n");
	if(a>0 && b<0)
	    printf("Q4\n");
	if(a==0 && b==0)
	    printf("Origem\n");
	if(a==0 && b!=0)
	    printf("Eixo Y\n");
	if(a!=0 && b==0)
	    printf("Eixo X\n");
    return 0;
}