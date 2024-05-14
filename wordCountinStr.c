#include <stdio.h>

int main()
{
    int T;
    char str[10001];
    scanf("%d", &T);
    while (T--)
    {
        int count = 0;
        scanf(" %[^\n]", str);
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ' && str[i + 1] != ' ')
            {
                count++;
            }
        }
        printf("Count = %d\n", count + 1);
    }
    return 0;
}