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
