#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T, p, q, c, temp;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d%d", &p, &q, &c);
        temp = 1;
        for (int i = 1; i <= q; i++)
        {
            temp = (temp * p) % c;
        }

        printf("Result = %d\n", temp);
    }
    return 0;
}