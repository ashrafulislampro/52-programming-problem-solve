#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, num, root, mul;
    cin >> T;
    while (T--)
    {
        cin >> num;
        root = sqrt(num);
        mul = root * root;

        if (mul == num)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}