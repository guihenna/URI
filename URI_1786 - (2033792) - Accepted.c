#include <stdio.h>

int main()
{
    char cpf[10];
    int num[9],i,b1,b2;
    while(scanf("%s",cpf)!=EOF)
    {
        b1=0;
        b2=0;
        for (i=0; i<9; i++)
        {
            num[i] = (int) cpf[i] - 48;
            b1 += (i+1)*num[i];
            b2 += (9-i)*num[i];
        }
        b1 = (b1%11)%10;
        b2 = (b2%11)%10;
        printf("%d%d%d.%d%d%d.%d%d%d-%d%d\n",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],b1,b2);
    }
}
