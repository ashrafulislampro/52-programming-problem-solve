#include <stdio.h>

int main()
{
    int num = 1000, i;
    for (i = 1000; i >= 1; i--)
    {
        if (i % 5 == 0 && i != 1000)
        {
            printf("\n");
        }
        printf("%d \t", i);
    }
    return 0;
}