#include <stdio.h>

int main()
{
    int a=0,alcool=0,gas=0,diesel=0;
    while (a!=4)
    {
        scanf("%d",&a);
        switch(a)
        {
            case 1:
            {
                alcool++;
                break;
            }
            case 2:
            {
                gas++;
                break;
            }
            case 3:
            {
                diesel++;
                break;
            }
            default:
            {
                break;
            }
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",diesel);
}
