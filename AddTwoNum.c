#include <stdio.h>

int main()
{
    int i, T, N, sum = 0;
    scanf("%d", &T);
    if (1 <= T <= 10000)
    {
        for (i = 1; i <= T; i++)
        {
            scanf("%d", &N);
            if (0 <= N <= 65535)
            {
                sum = N / 10000 + N % 10;
                printf("Sum = %d\n", sum);
            }
        }
    }
    return 0;
}