#include <stdio.h>

void main()
{
int a;
int b;
int max;

    printf("instroduce dos números a los que se deseé obtener el maximo común divisor\n");
    printf("intruce el primer valor\n");
    scanf("%d",&a);
    printf("introduce el segundo valor\n");
    scanf("%d",&b);
while(b !=0)
{
    max=b;
    b=a%b;
    a=max;
}
printf("el maximo común divisor es;%d\n",max);
}
