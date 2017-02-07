#include <stdio.h>

int main()
{
    int a,i,fat=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fat*= i;
    }
    printf("%d\n",fat);
}
