#include <stdio.h>

int main()
{
    char a[7],b[7],f;
    int a1,a2,a3,a4,b1,b2,b3,b4,at,bt,t,c1,c2,c3,c4;
    scanf("%c",&a[0]);
    scanf("%c",&a[1]);
    scanf("%c",&a[2]);
    scanf("%c",&a[3]);
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%c",&f);
    scanf("%c",&a[4]);
    scanf("%c",&f);
    scanf("%d",&a3);
    scanf("%c",&f);
    scanf("%c",&a[5]);
    scanf("%c",&f);
    scanf("%d",&a4);
    
    scanf("%c",&b[0]);
    scanf("%c",&b[1]);
    scanf("%c",&b[2]);
    scanf("%c",&b[3]);
    scanf("%d",&b1);
    scanf("%d",&b2);
    scanf("%c",&f);
    scanf("%c",&b[4]);
    scanf("%c",&f);
    scanf("%d",&b3);
    scanf("%c",&f);
    scanf("%c",&b[5]);
    scanf("%c",&f);
    scanf("%d",&b4);
    at=a1*86400 + a2*3600 + a3*60 + a4;
    bt=b1*86400 + b2*3600 + b3*60 + b4;
    t = bt - at;
    c1 = t/86400;
    c2 = (t%86400)/3600;
    c3 = ((t%86400)%3600)/60;
    c4 = (((t%86400)%3600)%60);
    printf("%d dia(s)\n",c1);
    printf("%d hora(s)\n",c2);
    printf("%d minuto(s)\n",c3);
    printf("%d segundo(s)\n",c4);
    return 0;
}