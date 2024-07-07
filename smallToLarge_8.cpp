#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T, i, num1, num2, num3;
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        cin >> num1 >> num2 >> num3;
        int arr[3] = {num1, num2, num3};
        sort(arr, arr + 3);
        cout << "Case " << i << ": " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }
    return 0;
}