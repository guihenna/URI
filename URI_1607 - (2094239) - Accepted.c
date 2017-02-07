#include <stdio.h>
#include <string.h>

int main()
{
    int t,aux,i,tamanho,teste1,teste2,res;
    scanf("%d",&t);
    for(aux=1;aux<=t;aux++)
    {
        tamanho=0;
        res=0;
        char a[10001],b[10001];
        scanf("%s  %s",a,b);
        tamanho = strlen(a);
        for(i=0;i<tamanho;i++)
        {
            teste1=a[i];
            teste2=b[i];
            //printf("%d %d\n",teste1,teste2);
            while(teste1!=teste2)
            {
                teste1++;
                res++;
                if(teste1==123)
                    teste1=97;
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
