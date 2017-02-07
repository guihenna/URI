#include <stdio.h>
#include <math.h>

int main()
{
    int r1,x1,y1,r2,x2,y2;
    double d;
    while(scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2) != EOF)
    {
        d = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
        if(d <= r1-r2)
            printf("RICO\n");
        else
            printf("MORTO\n");

    }
    return 0;
}
