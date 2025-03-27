#include <stdio.h>

int main()
{
    int R=0;
    int a;
    int b;
    printf("ingrese los valores a los que quiera obtener su maximo común divisor;\n");
    printf("ingrese el primer valor\n");
    scanf("%d",&a);
    printf("ingrese el segundo valor\n");
    scanf("%d",&b);
{
    R=a%b;
    if(R !=0)
    {
        a=b;
        b=R;
    }
}
printf("El maximo común divisor es;%d\n",b);
    
    return 0;
}





#include <stdio.h>

void main()
{
int a;
int b;
int R=0;
int max=0;
int pros=0;

    printf("instroduce dos números a los que se deseé obtener el maximo común divisor\n");
    printf("intruce el primer valor\n");
    scanf("%d",&a);
    printf("introduce el segundo valor\n");
    scanf("%d",&b);

pros=b/a;
R=b%a;


if(R=0)
{
    pros=b;
    max=a;
}


printf("el maximo común divisor es;%d\n",max);
}
