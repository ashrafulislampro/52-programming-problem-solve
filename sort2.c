#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[], int n)
{
    int temp, j, i, index_min;
    for (i = 0; i < n - 1; i++)
    {
        index_min = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index_min])
            {
                index_min = j;
            }
        }
        if (index_min != i)
        {
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
}
int main()
{
    int n1, n2, n3, T, i;
    int arr[3];
    printf("Enter the line number: ");
    scanf("%d", &T);

    if (T <= 100)
    {
        for (i = 0; i < T; i++)
        {
            scanf("%d%d%d", &n1, &n2, &n3);
            arr[0] = n1;
            arr[1] = n2;
            arr[2] = n3;
            selection_sort(arr, 3);
            printf("Case %d: %d %d %d\n", i, arr[0], arr[1], arr[2]);
        }
    }

    printf("\n");

    return 0;
}
