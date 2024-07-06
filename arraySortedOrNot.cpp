#include <iostream>
using namespace std;

int main()
{
    int T, n, i, sorted;
    cin >> T;
    while (T--)
    {
        sorted = 1;
        cin >> n;
        int *arr = new int[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                sorted = 0;
                break;
            }
        }
        if (sorted)
        {
            cout << "YES" << endl;
        }
        else
        {
            sorted = 1;
            for (i = 0; i < n; i++)
            {
                if (arr[i] < arr[i + 1])
                {
                    sorted = 0;
                    break;
                }
            }
            if (sorted)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}