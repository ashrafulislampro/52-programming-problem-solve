#include <iostream>
using namespace std;

int main()
{
    int T, size, num, i, j;
    cin >> T;
    while (T--)
    {
        cin >> size;
        int *arr = new int[size];
        for (i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (j = 0; j < size; j += 2)
        {
            cout << arr[j];
            if (j != size - 1) // or j < size - 2
            {
                cout << " ";
            }
        }
        cout << endl;
        delete[] arr;
    }
    return 0;
}