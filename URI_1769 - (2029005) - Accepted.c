#include <stdio.h>
#include <string.h>

int main()
{
    int num[11],i,s1,s2;
    char cpf[15];
    while(scanf("%s",cpf) != EOF)
    {
        s1=0;
        s2=0;
        sscanf(cpf,"%d.%d.%d-%d",&num[0],&num[3],&num[6],&num[9]);
        for(i=0; i<=6; i+=3)
        {
            num[i+2] = num[i]%10;
            num[i] /= 10;
            num[i+1] = num[i]%10;
            num[i] /= 10;
        }
        num[10] = num[9]%10;
        num[9] /= 10;
        //printf("%d%d%d.%d%d%d.%d%d%d-%d%d",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9],num[10]);
        for(i=0;i<9;i++)
        {
            s1 += (i+1)*num[i];
            s2 += (9-i)*num[i];
        }
        if(((s1%11)%10 == num[9]) && ((s2%11)%10 == num[10]))
        {
            printf("CPF valido\n");
        }
        else
            printf("CPF invalido\n");
    }
    return 0;
}
