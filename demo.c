#include <stdio.h>

int main()
{

    double num = 5.645678942456784;
    float min = 2.4454567;
    int myNumbers[] = {1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("%lu = %d\n", sizeof(myNumbers), length);
    // printf("%0.15lf\n", num);
    // printf("%0.7f\n", min);
    // printf("%d", 15 > 5);
    //     char numbers[100]; // Assuming a maximum length of 100 characters for the input string

    //     printf("Enter a string of numbers: ");
    //     fgets(numbers, sizeof(numbers), stdin);
    //     // scanf("%s", numbers);
    //     int size = strlen(numbers);
    //     printf("You entered: %s, %d\n", numbers, size);

    return 0;
}