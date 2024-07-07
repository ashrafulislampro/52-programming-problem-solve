// solution one
#include <stdio.h>

int main()
{
    int T, i;
    char n[101];
    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        scanf("%s", &n);
        int size = strlen(n);

        if (n[size - 1] % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}

// solution 2
// #include <stdio.h>

// int main()
// {
//     int T, i, size;
//     char n[101];
//     printf("Enter a line number =");
//     scanf("%d", &T);

//     for (i = 1; i <= T; i++)
//     {
//         printf("Enter a number =");
//         scanf("%s", &n);
//         size = strlen(n);

//         if (n[size - 1] % 2 == 0)
//         {
//             printf("even = %s\n", n);
//         }
//         else
//         {
//             printf("odd = %s\n", n);
//         }
//     }
//     return 0;
// }
