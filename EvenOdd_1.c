#include <stdio.h>

int main()
{
    int t, i, num;
    printf("Enter a line number =");
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        printf("Enter a number =");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            printf("even = %d\n", num);
        }
        else
        {
            printf("odd = %d\n", num);
        }
    }
    return 0;
}