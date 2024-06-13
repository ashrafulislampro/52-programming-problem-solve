#include <stdio.h>

int main()
{
    int a, b, T, count;
    scanf("%d", &T);

    while (T--)
    {
        count = 0;
        scanf("%d%d", &a, &b);
        for (int i = a; i <= b; i++)
        {
            for (int j = 2; j * j <= b; j++)
            {
                if (i % j == 0)
                {
                    break;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}