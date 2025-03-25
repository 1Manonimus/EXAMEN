
#include <stdio.h>

int main()
{
   int i=1;
   int n;
       
{
    while(i<=10)
    {
printf("ingrese un valor;\n");
scanf("%u",&n);
    {
        if (n<10)
        {
            printf("el valor es menor que 10\n");
        }
        else
        {
            if(n<=100)
            {
                printf("el valor esta entre 10 y 100\n");
            }
            else
            {
                printf("el valor es mayor que 100\n");
            }
        }
    }
    i=i+1;
    }
}

    return 0;
}
