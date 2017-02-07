#include <stdio.h>

int count;

int fib(int x)
{
    int res;
    count++;
    if(x>1)
        res = fib(x-1) + fib(x-2);
    else
        res = x;
    return res;
}

int main()
{
    int n,x,resu,i;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        count = 0;
        scanf("%d",&x);
        resu = fib(x);
        printf("fib(%d) = %d calls = %d\n",x,count-1,resu);
    }
    return 0;
}
