#include <stdio.h>

int main()
{
    int T;
    char str[10001];
    scanf("%d", &T);
    while (T--)
    {
        scanf(" %[^\n]", str);
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                printf("%c", str[i]);
            }
        }
        printf("\n");
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != ' ')
            {
                printf("%c", str[i]);
            }
        }
    }
    return 0;
}