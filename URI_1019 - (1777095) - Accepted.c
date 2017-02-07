#include <stdio.h>
 
int main() {
 
    int val,seg,min,hor;
    scanf("%d",&val);
    hor = val/3600;
    min = (val%3600)/60;
    seg = (val%3600)%60;
    printf("%d:%d:%d\n",hor,min,seg);
    return 0;
}