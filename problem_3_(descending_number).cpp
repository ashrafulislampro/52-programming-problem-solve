#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    for (i = 1000, j = 0; i >= 1; i--)
    {
        cout << i;
        j++;
        if (j % 5 != 0)
        {
            cout << " ";
        }
        if (j % 5 == 0)
        {
            cout << endl;
        }
    }
    return 0;
}
