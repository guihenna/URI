#include <stdio.h>

int main()
{
    int x1,x2,y1,y2,aux;
    while(1)
    {
        aux = 0;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        if(y1>y2)
        {
            y2+=60;
            x2-=1;
        }
        if(x1>x2)
        {
            x2+=24;
        }
        if(x1== x2 && y1 == y2 && y1 == x1 && x1 == 0)
            break;
        else if(x1== x2 && y1 == y2)
        {
            printf("1440\n");
        }
        else
        {
            aux+=(y2-y1);
            aux+=(x2-x1)*60;
            printf("%d\n",aux);
        }
    }
    return 0;
}
