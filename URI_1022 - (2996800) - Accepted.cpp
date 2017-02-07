#include <iostream>
//#include <stdio.h>

using namespace std;

int main()
{
    int n;
    int n1, n2, d1, d2, x, y;
    char c, aux1, aux2;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %c %d %c %d %c %d", &n1, &aux1, &d1, &c, &n2, &aux2, &d2);
        //printf("%d %c %d %c %d %c %d\n", n1, aux1, d1, c, n2, aux2, d2);
        if(c == '+')
        {
            x = (n1*d2 + n2*d1);
            y = d1*d2;
        }
        else if(c == '-')
        {
            x = (n1*d2 - n2*d1);
            y = d1*d2;
        }
        else if(c == '*')
        {
            x = n1*n2;
            y = d1*d2;
        }
        else if(c == '/')
        {
            x = n1*d2;
            y = n2*d1;
        }
        printf("%d/%d = ", x, y);
        int aux = 0;
        if(x < 0)
        {
            aux = 1;
            x = -x;
        }

        for(int i = x; i > 1; i--)
        {
            if(x%i == 0 && y%i == 0)
            {
                x /= i;
                y /= i;
            }
        }
        if(aux)
            x = -x;


        printf("%d/%d\n", x, y);
    }
    return 0;
}
