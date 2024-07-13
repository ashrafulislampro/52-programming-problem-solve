#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    unsigned long long A, B, C, i, j;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C;
        for (j = A * B; j <= C; j += (A * B))
        {

            cout << j << endl;
        }
        cout << endl;
    }
    return 0;
}