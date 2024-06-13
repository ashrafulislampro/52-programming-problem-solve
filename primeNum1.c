#include <stdio.h>
#include <math.h>
#define size 100001
char arr[size];

void sieve()
{
    int i, j, root;
    for (i = 2; i < size; i++)
    {
        arr[i] = 1;
    }
    root = sqrt(size);
    for (i = 2; i <= root; i++)
    {
        if (arr[i] == 1)
        {
            for (j = 2; i * j <= size; i++)
            {
                arr[i * j] = 0;
            }
        }
    }
}

int main()
{
    int T, a, b, count;
    sieve();

    scanf("%d", &T);
    while (T--)
    {

        scanf("%d%d", &a, &b);
        count = 0;
        for (int i = a; i <= b; i++)
        {
            if (arr[i])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}