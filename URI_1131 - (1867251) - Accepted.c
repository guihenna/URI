#include <stdio.h>

int main()
{
    int i,g,b=0,c=0,d=0,k=1,ti=0,tg=0,te=0;
    while (k==1)
    {
        scanf("%d",&i);
        scanf("%d",&g);
        b+=i;
        c+=g;
        d++;
        if(i>g)
            ti++;
        else if(g>i)
            tg++;
        else
            te++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&k);
    }
    printf("%d grenais\n",d);
    printf("Inter:%d\n",ti);
    printf("Gremio:%d\n",tg);
    printf("Empates:%d\n",te);
    if(ti>tg && ti>te)
        printf("Inter venceu mais\n");
    if(tg>ti && tg>te)
        printf("Gremio venceu mais\n");
    if(te>tg && ti<te)
        printf("Nao houve vencedor\n");
    return 0;
}
