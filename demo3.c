#include <stdio.h>

int main(void)
{

    int t;
    scanf("%d", &t);
    char str[1001];

    while (t--)
    {
        int arr[26] = {0};
        scanf(" %[^\n]", str);
        for (int i = 0; str[i] != '\0'; i++)
        {
            arr[str[i] - 97]++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0)
                printf("%c = %d\n", i + 97, arr[i]);
        }
        printf("\n");
    }

    return 0;
}