#include <stdio.h>
#include <math.h>

int main()
{
    int n,f1,f2,f,i,aux,m;
    scanf("%d",&n);
    m=n;
    for(n = m;n>=1;n--)
    {
        aux=0;
        f=0;
        scanf("%d %d",&f1, &f2);
        if (f1>f2){
            while(f2!=0){
               aux = f1%f2;
               f1 = f2;
               f2 = aux;
               f = f1;
               }
         }else{
            while(f1!=0){
               aux = f2%f1;
               f2 = f1;
               f1 = aux;
               f = f2;
               }
         }
        printf("%d\n",f);
    }
    return 0;
}
