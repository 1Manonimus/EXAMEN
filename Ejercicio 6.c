#include <stdio.h>

int main()
{
int sum=0;
int pro=0;
int i=1;
int y=1;
int x=1;
int a;

printf("Los 10 valores que se den, se obtendra su promedio(solo se contara en el intervalo de 5-2500)\n");
{
while(i<=10)
{
printf("introduzca el valor %d\n",i);
scanf("%d",&a);
{
    if(a>=5 , a<=2500)
    {
        sum=sum+a;
        y=y+1;
    }
    else
    {
        x=x+1;
    }
}
i=i+1;
}
}
pro=sum/y;
printf("el promedio es;%d\n",pro);

    return 0;
}
