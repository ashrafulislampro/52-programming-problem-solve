#include <stdio.h>
#include <string.h>

int main()
{
    int T, i, j, count[26];
    char str[1001];

    scanf("%d", &T);
    while (T--)
    {
        for (i = 0; i < 26; i++)
        {
            count[i] = 0;
        }

        scanf(" %[^\n]", str);
        for (j = 0; j < strlen(str); j++)
        {
            if (str[j] >= 'a' && str[j] <= 'z')
            {
                count[str[j] - 'a']++;
            }
        }
        for (i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                printf("%c = %d\n", 'a' + i, count[i]);
            }
        }
        printf("\n");
    }

    return 0;
}