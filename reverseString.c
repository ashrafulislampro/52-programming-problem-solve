#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    char str[1001];
    scanf("%d", &T);
    while (T--)
    {
        scanf(" %[^\n]", str);
        for (int i = strlen(str) - 1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}