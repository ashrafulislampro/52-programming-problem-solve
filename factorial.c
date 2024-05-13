#include <stdio.h>

int main()
{
    int num, T, i;
    long long int factorial = 1;

    scanf("%d", &T);
    if (T <= 100)
    {
        for (i = 1; i <= T; i++)
        {
            scanf("%d", &num);
            for (int j = 2; j <= num; j++)
            {
                factorial = factorial * j;
            }
            printf("%lld\n", factorial);
            factorial = 1;
        }
    }
    return 0;
}