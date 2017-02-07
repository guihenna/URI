#include <stdio.h>

int main()
{
    int x1,x2,y1,y2,aux;
    while(1)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        if(x1<x2)
        {
            aux = x1;
            x1 = x2;
            x2 = aux;
        }
        if(y1<y2)
        {
            aux = y1;
            y1 = y2;
            y2 = aux;
        }
        if(x1== x2 && y1 == y2 && y1 == x1 && x1 == 0)
            break;

        else if(x1 == x2 && y1 == y2)
            printf("0\n");
        else if(x1!=x2 && y1!=y2 && y1-y2 != x1-x2)
            printf("2\n");
        else
            printf("1\n");
    }
    return 0;
}
