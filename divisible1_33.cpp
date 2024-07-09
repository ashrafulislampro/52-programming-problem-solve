#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    unsigned long long a, b, c;
    while (T--)
    {
        scanf("%llu%llu%llu", &a, &b, &c);

        // Calculate the first multiple of c >= a
        if (a % c != 0)
        {
            a = ((a / c) + 1) * c;
        }

        // Print multiples of c from the adjusted a to b
        for (unsigned long long i = a; i <= b; i += c)
        {
            printf("%llu\n", i);
        }
        printf("\n");
    }
    return 0;
}