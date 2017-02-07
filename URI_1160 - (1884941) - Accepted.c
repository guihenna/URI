#include <stdio.h>

int main()
{
    int i,pa,pb,t,anos=0;
    double ga,gb;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        anos=0;
        scanf("%d",&pa);
        scanf("%d",&pb);
        scanf("%lf",&ga);
        scanf("%lf",&gb);
        while(pa<=pb)
        {
            pa+= (pa*(ga/100));
            pb+= (pb*(gb/100));
            anos++;
            if(anos>100)
            {
                break;
            }
        }
        if(anos<=100)
        {
            printf("%d anos.\n",anos);
        }
        else
        {
            printf("Mais de 1 seculo.\n");
        }
    }
    return 0;
}