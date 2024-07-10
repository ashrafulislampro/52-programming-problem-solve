#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T, size, num, len, i;
    cin >> T;
    while (T--)
    {
        vector<int> arr;
        cin >> size;
        for ( i = 0; i < size; i++)
        {
            cin >> num;
            arr.push_back(num);
        }
        cin >> size;
        for ( i = 0; i < size; i++)
        {
            cin >> num;
            arr.push_back(num);
        }
        sort(arr.begin(), arr.end());
        len = arr.end() - arr.begin();
        for ( i = 0; i < len; i++)
        {
            cout << arr[i];
            if (i < len - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}