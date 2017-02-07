#include <stdio.h>

int main()
{
    unsigned long long a,b,i,fat=1,fat2=1;
    while (scanf("%llu",&a)!=EOF)
    {
        fat = 1;
        fat2 = 1;
        for(i=1;i<=a;i++)
        {
            fat*= i;
        }
        scanf("%llu",&b);
        for(i=1;i<=b;i++)
        {
            fat2*= i;
        }
        printf("%llu\n",fat+fat2);
    }
}
