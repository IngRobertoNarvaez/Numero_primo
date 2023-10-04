#include <stdio.h>
int main(int argc, char const *argv)
{
    int num;
    printf("Ingrese el numero\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("El numero es primo\n");
    }
    else
        printf("No es Primo");

    return 0;
}