#include <stdio.h>

int main()
{
    int T, i, j, num;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d", &num);
        printf("Case %d:", i);
        if (1 <= num <= 100000)
        {
            for (j = 1; j <= num; j++)
            {
                if (num % j == 0)
                {
                    printf(" %d", j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}