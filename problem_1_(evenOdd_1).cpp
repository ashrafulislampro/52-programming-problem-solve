#include <bits/stdc++.h>
using namespace std;

int isEvenOrOdd(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n % 2 == 0)
    {
        return 0;
    }
    return 1;
}

int main()
{

    int T, i, root, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        int res = isEvenOrOdd(n);
        if (res == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }

    return 0;
}