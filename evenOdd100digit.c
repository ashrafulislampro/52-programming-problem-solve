#include <stdio.h>

int main()
{
    int T, i;
    char n[101];
    printf("Enter a line number =");
    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        printf("Enter a number =");
        scanf("%s", &n);

        if (n % 2 == 0)
        {
            printf("even = %d\n", n);
        }
        else
        {
            printf("odd = %d\n", n);
        }
    }
    return 0;
}