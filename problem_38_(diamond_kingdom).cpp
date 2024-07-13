#include <iostream>
using namespace std;

int main()
{
    int T, n, m, i, j;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= i; j++)
            {
                cout << m;
                if (j < i)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        for (i = n - 2; i >= 0; i--)
        {
            for (j = 0; j <= i; j++)
            {
                cout << m;
                if (j < i)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}