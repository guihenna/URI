#include <stdio.h>
#include <string.h>

int main()
{
    int n,t1[2],t2[2],p1,p2,i,s1,s2;
    scanf("%d",&n);
    for(;n>=1;n--)
    {
        p1=0;
        p2=0;
        scanf("%d x %d",&t1[0],&t2[0]);
        if(t1[0] > t2[0])
            p1+=3;
        else if(t2[0] > t1[0])
            p2+=3;
        else
        {
            p1++;
            p2++;
        }
        scanf("%d x %d",&t2[1],&t1[1]);
        if(t1[1] > t2[1])
            p1+=3;
        else if(t2[1] > t1[1])
            p2+=3;
        else
        {
            p1++;
            p2++;
        }
        if(p1!=p2)
        {
            if(p1>p2)
                printf("Time 1\n");
            else
                printf("Time 2\n");
            continue;
        }
        else
        {
            s1 = t1[0]+t1[1]-t2[0]-t2[1];
            s2 = t2[0]+t2[1]-t1[0]-t1[1];
            if(s1!=s2)
            {
                if(s1>s2)
                    printf("Time 1\n");
                else
                    printf("Time 2\n");
                continue;
            }
            else
            {
                if(t1[1] != t2[0])
                {
                    if(t1[1] > t2[0])
                        printf("Time 1\n");
                    else
                        printf("Time 2\n");
                }
                else
                    printf("Penaltis\n");
            }
        }
    }
    return 0;
}
