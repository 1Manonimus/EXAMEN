#include <stdio.h>

int main()
{
int sum = 0;
int a;


printf ("ingresar los valores, esté se mostrara hasta que la suma supere 78500\n");
 printf ("ingrese los número que quiere sumar;\n");

{  
    while(sum<=78500)
    {
        scanf("%u",&a);
    
        sum=sum+a;
    }
    {
printf ("la suma es %d\n",sum);
    }
}


    return 0;
}
