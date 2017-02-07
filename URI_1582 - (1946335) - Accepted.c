#include <stdio.h>

int mdc(int g,int h, int j)
{
    int i;
    for(i=g; i>=2; i--)
    {
        if(g%i==0 && h%i==0 && j%i==0 )
            return i;
    }
    return 0;
}

int main()
{
    int x,y,z,aux;
    while(scanf("%d %d %d",&x,&y,&z)!=EOF)
    {
        if (y>x)
        {
            aux = x;
            x = y;
            y = aux;
        }
        if (z>x)
        {
            aux = x;
            x = z;
            z = aux;
        }
        if((x*x)==(y*y)+(z*z))
        {
            if(mdc(x,y,z)==0)
                printf("tripla pitagorica primitiva\n");
            else
                printf("tripla pitagorica\n");
        }
        else
            printf("tripla\n");
    }
    return 0;
}
