#include <stdio.h>
#include <stdlib.h>
#include <math.h>
   
int main(){
      
    int val1, val2, aux,i,res;
    res = 0;
    scanf("%d",&val1);
    scanf("%d",&val2);
    if (val1 > val2)
    {
        aux = val1;
        val1 = val2;
        val2 = aux;
    }
    for (i=val1;i<=val2;i++)
    {
        if (i%13!=0)
        {
            res += i;
        }
    }
    printf("%d\n",res);
    return 0;
}