#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001], *word;
    int T, i, count;
    scanf("%d", &T);
    while (T--)
    {
        scanf(" %[^\n]", str);
        count = 0;
        // printf("sssCount = %s = %lu\n", str, strlen(str));
        // for (i = 0; str[i] != '\0'; i++)
        // {
        //     if (str[i] == ' ' && str[i + 1] == ' ')
        //     {
        //         count++;
        //     }
        // }
        word = strtok(str, ",!;?.");
        while (word != NULL)
        {
            if (strlen(word) > 0)
            {
                count++;
            }
            word = strtok(NULL, ",!;?.");
        }
        for (i = 0;; i++)
        {
            if (str[i] == ' ' && str[i + 1] == ' ')
            {
                count++;
            }
            if (word == NULL)
            {
                break;
            }
        }

        printf("Count = %d\n", count);
    }

    return 0;
}