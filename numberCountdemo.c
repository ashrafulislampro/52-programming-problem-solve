#include <stdio.h>

int main()
{
    int i, T;
    char N[100];
    scanf("%d", &T);
    if (1 <= T <= 100)
    {
        for (i = 1; i <= T; i++)
        {
            scanf("%s", &N);
            int size = strlen(N);
            printf("%d = %s\n", N, size);
        }
    }
    return 0;
}