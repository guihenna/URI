#include <stdio.h>

int main()
{
    int i=1,j=7;
    while(i<=9)
    {
        printf("I=%d ",i);
        printf("J=%d\n",j);
        j--;
        if(j==i+3)
        {
            j+=5;
            i+=2;
        }
    }
    return 0;
}
