#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[] = "1 -2 10000 -50 20 7 445 34 123 23 45 566";
    char *p, *e;
    long input;
    int count = 0;
    p = line;

    for (p = line;; p = e)
    {
        input = strtol(p, &e, 10);

        if (p == e)
        {
            break;
        }
        printf("invalid = %ld, %c, %c\n", input, *e, *p);
        count++;
    }
    printf("%d\n", count);

    return 0;
}
