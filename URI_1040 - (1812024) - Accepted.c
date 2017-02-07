#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,e,x,y;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    x=(a*2+b*3+c*4+d*1)/10;
    
    if(x>=7.0)
	{
	    printf("Media: %.1lf\n",x);
		printf("Aluno aprovado.\n");
	}
	else if(x<=4.9)
	{
	    printf("Media: %.1lf\n",x);
		printf("Aluno reprovado.\n");
	}
	else
	{
		scanf("%lf",&e);
		printf("Media: %.1lf\n",x);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1lf\n",e);
		if(((x+e)/2)>=5.0)
			printf("Aluno aprovado.\n");
		else
			printf("Aluno reprovado.\n");
		printf("Media final: %.1lf\n",((x+e)/2));
	}
    return 0;
}