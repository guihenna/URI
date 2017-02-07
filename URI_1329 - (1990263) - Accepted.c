#include <stdio.h>

int main()
{
    int i,x,c1,c2,m;
    while(1)
    {
        scanf("%d",&m);
        if(m != 0)
        {
            c1=0;
            c2=0;
            for(i=0; i<m; i++)
            {
                scanf("%d",&x);
                if(x==1)
                    c2++;
                else
                    c1++;
            }
            printf("Mary won %d times and John won %d times\n",c1,c2);
            m--;
        }
        else
            break;
    }
    return 0;
}
