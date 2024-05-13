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
        int count = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                count++;
            }
        }
        printf("Number of vowels = %d\n", count);
    }
    return 0;
}
