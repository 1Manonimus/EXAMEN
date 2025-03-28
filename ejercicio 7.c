#include <stdio.h>

int main()
{
    int i=1;
    int pares=0;
    int impares=0;
    int mul=1;
    int a;
    printf("Instruduce 20 númeors, los pares se sumaran y los impares se multiplicarán\n");
    {
    while(i<=20)
    {
        printf("introduce el valor %d\n",i);
        scanf("%d",&a);
        
        if(a % 2 == 0)
        {
            pares=pares+a;
        }
        else
        {
            impares=mul*a;
            mul=impares;
            impares=0;
        }
        

    i=i+1;
    }
    }

    {
    if(pares !=0)
    {
    printf("la suma de los pares es; %d\n ",pares);
    }
    else
    {
        printf("no ingresante números pares\n");
    }
    }
    {
    if(mul !=1)
    {
        printf("la multiplicación de las impares es; %d\n",mul);
    }
    else
    {
        printf("no ingresante números impares\n");
    }
    }

    return 0;
}
