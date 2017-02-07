#include <stdio.h>
 
int main() {
 
    int val,i100,i50,i20,i10,i5,i2,i1;
    scanf("%d",&val);
    i100 = val/100;
    i50 = (val%100) / 50;
    i20 = ((val%100)%50)/20;
    i10 = (((val%100)%50)%20)/10;
    i5 = ((((val%100)%50)%20)%10)/5;
    i2 = (((((val%100)%50)%20)%10)%5)/2;
    i1 = (((((val%100)%50)%20)%10)%5)%2;
    printf("%d\n",val);
    printf("%d nota(s) de R$ 100,00\n",i100);
    printf("%d nota(s) de R$ 50,00\n",i50);
    printf("%d nota(s) de R$ 20,00\n",i20);
    printf("%d nota(s) de R$ 10,00\n",i10);
    printf("%d nota(s) de R$ 5,00\n",i5);
    printf("%d nota(s) de R$ 2,00\n",i2);
    printf("%d nota(s) de R$ 1,00\n",i1);
    return 0;
}