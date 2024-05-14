#include <stdio.h>
#include <math.h>

#define size 100001
char arr[size];

int isPrime(int num)
{
    int root = sqrt(num);
    for (int i = 2; i <= root; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int T, a, b;
    scanf("%d", &T);
    while (T--)
    {
        int count = 0;
        scanf("%d%d", &a, &b);
        for (int i = a; i <= b; i++)
        {
            if (isPrime(i))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}