#include <stdio.h>

int main()
{
    int i, j, p, T, N;
    scanf("%d", &T);
    if (1 <= T <= 25)
    {
        for (i = 1; i <= T; i++)
        {
            scanf("%d", &N);
            if (1 <= N < 80)
            {
                for (j = 1; j <= N; j++)
                {
                    for (p = 1; p <= N; p++)
                    {
                        printf("%c", '*');
                    }
                    printf("\n");
                }
            }
            printf("\n");
        }
    }
    return 0;
}