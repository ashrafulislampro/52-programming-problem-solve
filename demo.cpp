#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int T, size, i, num, missing, arr[100001];
    cin >> T;
    while (T--)
    {
        scanf("%d", &size);
        for (i = 1; i <= size; i++)
        {
            arr[i] = 0;
        }
        for (i = 0; i < size; i++)
        {
            scanf("%d", &num);
            arr[num] = 1;
        }
        for (i = 1; i <= size; i++)
        {
            if (arr[i] == 0)
            {
                missing = i;
                break;
            }
        }
        printf("%d\n", missing);
    }

    return 0;
}
