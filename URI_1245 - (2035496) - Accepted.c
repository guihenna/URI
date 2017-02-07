#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,tam,vet1[61],vet2[61],count;
    char l;
    while(scanf("%d",&n) != EOF)
    {
        count = 0;
        memset(vet1,0,sizeof(vet1));
        memset(vet2,0,sizeof(vet2));
        for(;n>=1;n--)
        {
            scanf("%d %c",&tam,&l);
            if(l == 'D')
                vet1[tam]++;
            else
                vet2[tam]++;
        }
        for(i=30;i<=60;i++)
        {
            if(vet1[i]>0 && vet2[i]>0)
            {
                if(vet1[i]>vet2[i])
                    count+=vet2[i];
                else
                    count+=vet1[i];
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
