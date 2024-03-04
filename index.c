#include <stdio.h>

int main()
{
    char i, j;

    for (i = "A"; i <= "B"; i++)
    {

        for (j = "C"; j <= "D"; j++)
        {

            printf("*");
        }

        printf("\n");
    }
    return 0;
}