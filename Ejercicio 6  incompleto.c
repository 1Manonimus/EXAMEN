#include <stdio.h>

int main()
{
  int sum=0;
  int pro=0;
  int i=1;
  int y=0;
  int a;
  
 printf("Ingresa los valores a los que quiere obtener promedio (solo se tomaran en cuenta los números comprendidos entre el 5 y el 2500\n");
{
while(i<=10)
{
    printf("ingresa el valor %d\n",i);
    scanf("%d",&a);
    if(a<5)
    {
        sum=sum+0;
    }
    else
    {
        if(a<=2500)
        {
            sum=sum+a;
            y=y+1;
        }
        else
        {
            sum=sum+0;
        }
    }
i=i+1;
}
}

if(y !=0)
{
    pro=sum/y;
printf("el promedio de los números comprendidos entre 5-2500 es; %d\n",pro);
    
}
else
{
    printf("los valores no cumplen con los requirimientos");
}
    return 0;
}
