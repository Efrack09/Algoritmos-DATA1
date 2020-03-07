#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
int add(int a, int b);         

int main()
{
    int n1,n2,sum;

    printf("Escribe 2 numeros: ");
    scanf("%d %d",&n1,&n2);

    sum = add(n1, n2);       
    printf("sum = %d",sum);

    return 0;
}

int add(int a, int b)           
{
    int result;
    result = a+b;
    return result;                 
}
