#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T, size, i;
    cin >> T;
    while (T--)
    {
        scanf("%d", &size);
        int *arr = new int[size - 1];
        for (i = 0; i < size - 1; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + (size - 1));
        for (i = 1; i <= size; i++)
        {
            if (arr[i - 1] != i)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}