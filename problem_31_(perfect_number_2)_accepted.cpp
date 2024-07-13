#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T, num, i;
    int arr[] = {6, 28, 496, 8128, 33550336};
    cin >> T;
    while (T--)
    {

        cin >> num;
        for (i = 0; i < 5; i++)
        {
            if (arr[i] <= num)
            {
                cout << arr[i] << endl;
            }
            else
            {
                break;
            }
        }
        cout << endl;
    }
    return 0;
}