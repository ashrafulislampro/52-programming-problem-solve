#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
     int T, x, n;
    scanf("%d", &T); // Using scanf for faster input
    while (T--)
    {
        scanf("%d %d", &x, &n); // Using scanf for faster input
        if (x < n)
        {
            int i = x;
            while (i <= n)
            {
                printf("%d\n", i); // Using printf for faster output
                i += x;
            }
        }
        else
        {
            printf("Invalid!\n"); // Using printf for faster output
        }
        printf("\n");
    }
    return 0;
}

