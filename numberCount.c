#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[100000];
    char *p, *e;
    long input;
    int count = 0, t, i = 0;
    p = line;

    printf("Enter line number: ");
    scanf("%d", &t);
    int numCount[t];

    if (1 <= t <= 100)
    {
        while (i < t)
        {
            scanf(" %[^\n]", line);
            for (p = line;; p = e)
            {
                input = strtol(p, &e, 10);
                if (p == e)
                {
                    break;
                }
                count++;
            }
            numCount[i] = count;
            count = 0;
            i++;
        }
    }

    for (int j = 0; j < t; j++)
    {
        printf("%d\n", numCount[j]);
    }

    return 0;
}