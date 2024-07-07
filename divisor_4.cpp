#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, num, i, j;
    cin >> T;

    for (i = 1; i <= T; i++)
    {
        cin >> num;
        cout << "Case " << i << ":";
        for (j = 1; j <= num; j++)
        {
            if (num % j == 0)
            {
                cout << " " << j;
            }
        }
        cout << endl;
    }

    return 0;
}
