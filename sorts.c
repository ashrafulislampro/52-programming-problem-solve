#include <stdio.h>

int main()
{
    int n1, n2, n3, temp, i, T;
    scanf("%d", &T);
    if (T <= 100)
    {
        for (i = 1; i <= T; i++)
        {
            scanf("%d%d%d", &n1, &n2, &n3);
            if ((n1 != n2 || n2 != n3 || n1 != n3) && (n1 <= 1000 && n2 <= 1000 && n3 <= 1000))
            {
                if (n1 > n2)
                {
                    temp = n1;
                    n1 = n2;
                    n2 = temp;
                }
                if (n2 > n3)
                {
                    temp = n2;
                    n2 = n3;
                    n3 = temp;
                }
                if (n1 > n2)
                {
                    temp = n1;
                    n1 = n2;
                    n2 = temp;
                }
                printf("Case %d: %d %d %d\n", i, n1, n2, n3);
            }
        }
    }
    return 0;
}