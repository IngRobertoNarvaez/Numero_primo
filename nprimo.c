#include <stdio.h>
int main(int argc, char const *argv)
{
    int num;
    int cnum = 0;
    printf("Ingrese el numero\n");
    scanf("%d", &num);
    if (num <= 1)
    {
        cnum = 0;
    }
    else
    {
        for (int i = 2; i <= num / 2; ++i)
        {
            if (num % i == 0)
            {
                cnum = 0;
                break;
            }
        }
    }

    if (cnum)
    {
        printf("%d es un numero primo.\n", num);
    }
    else
    {
        printf("%d no es un numero primo.\n", num);
    }
    return 0;
}