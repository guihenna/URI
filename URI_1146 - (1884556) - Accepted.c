#include <stdio.h>

int main()
{
    int a=1,i;
    while(a!=0)
    {
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
            printf("%d",i);
            if(i == a)
            {
                printf("\n");
            }
            else
            {
                printf(" ");
            }
        }
    }
}
