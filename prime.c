#include <stdio.h>
#include <math.h>
#define size 100001
char arr[size];

void seive()
{
    int i, root, j;
    for (i = 2; i < size; i++)
    {
        arr[i] = 1;
    }
    root = sqrt(size);
    for (i = 2; i <= root; i++)
    {
        if (arr[i] == 1)
        {
            for (j = 2; i * j < size; j++)
            {
                arr[i * j] = 0;
            }
        }
    }
}

int main()
{
    int a, b, T, count;
    seive();
    scanf("%d", &T);

    while (T--)
    {
        count = 0;
        scanf("%d%d", &a, &b);
        for (int i = a; i <= b; i++)
        {
            if (arr[i] == 1)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}