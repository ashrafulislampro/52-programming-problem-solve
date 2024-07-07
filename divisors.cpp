#include <iostream>
using namespace std;

int main()
{
    int T, i, n, j;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        if (T != 0)
        {
            cout << endl;
        }
    }
    return 0;
}