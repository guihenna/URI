#include <stdio.h>

int teste(char t[], int x)
{
    int i,num = 0;
    for(i = 0; i < x; i++)
    {
        if(t[i] == 'E')
        {
            num--;
            if (num == -1)
                num = 3;
        }
        else
        {
            num++;
            if (num == 4)
                num = 0;
        }
    }
    return num;
}

int main()
{
    char t[1001];
    int num,n=0;
    while (n==0)
    {
        num=0;
        //memset(t,0,sizeof(t));
        scanf("%d",&n);
        if(n == 0)
            break;
        scanf("%s",t);
        num = teste(t,n);
        if(num == 0)
            printf("N\n");
        else if (num == 1)
            printf("L\n");
        else if (num == 2)
            printf("S\n");
        else if (num == 3)
            printf("O\n");
        n = 0;
    }
    return 0;
}
