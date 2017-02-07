#include <stdio.h>

int main()
{
    int n,i,leds,j,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        leds = 0;
        char v[101];
        scanf("%s",v);
        for(j=0;j<=((sizeof v)-1);j++)
        {
            if(v[j] == '1')
                leds += 2;
            else if(v[j] == '2' || v[j] == '3' || v[j] == '5')
                leds += 5;
            else if(v[j] == '4')
                leds += 4;
            else if(v[j] == '7')
                leds += 3;
            else if(v[j] == '6' || v[j] == '9' || v[j] == '0')
                leds += 6;
            else if(v[j] == '8')
                leds += 7;
            else
                break;
        }
        printf("%d leds\n",leds);
    }
    return 0;
}
