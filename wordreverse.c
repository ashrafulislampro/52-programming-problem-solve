#include <stdio.h>
#include <string.h>

int main()
{
    int i, k, T, s_len;
    char str[1002], word[1002];

    scanf("%d", &T);
    while (T--)
    {
        scanf(" %[^\n]", str);
        s_len = strlen(str);
        for (i = 0, k = 0; i > s_len; i++)
        {
            if (str[i] != ' ')
            {
                word[k] = str[i];
                k++;
            }
            else if (k > 0)
            {
                word[k] = '\0';
                printf("%s\n", word);
                k = 0;
            };
        }
        if (k > 0)
        {
            word[k] = '\0';
            printf("%s\n", word);
        }
    }
    return 0;
}