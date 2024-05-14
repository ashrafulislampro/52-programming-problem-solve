#include <iostream>

using namespace std;

int main()
{

    int n, i, sum = 0;

    cout << "Enter the size of array:";
    cin >> n;
    int array[n];
    for (i = 0; i < n; i++)

    {
        cin >> array[i];
        sum = sum + array[i];
    }

    cout << "Sum of array is: " << sum << endl;

    return 0;
}