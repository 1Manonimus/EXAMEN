#include <stdio.h>

int main()
{
int i=1;
int sum=0;
int pro=0;
int a;
printf("los 10 valores que introduzcas se sumaran y se obtendra su promedio;\n");
{
    while(i<=10)  
    {
printf("Intruduce el valor %d\n",i);
    scanf("%u",&a);
    sum=sum+a;
    i=i+1;
    }
}
pro=sum/i;
printf("la suma es; %d\n",sum);
printf("su promedio es; %d\n",pro);

    return 0;
}
