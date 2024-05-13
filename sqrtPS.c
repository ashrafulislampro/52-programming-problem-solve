#include <stdio.h>
#include <math.h>

int main()
{
    int num, sq_root, T;

    scanf("%d", &T);
    if (T <= 100)
    {
        for (int i = 1; i <= T; i++)
        {
            scanf("%d", &num);
            sq_root = sqrt(num);
            if (sq_root * sq_root == num)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}