#include <bits/stdc++.h>
using namespace std;

int isEvenOrOdd(string str, int len)
{
    if (str[len - 1] == 0)
        return 0;
    if (str[len - 1] % 2 == 0)
        return 0;
    return 1;
}
int main()
{
    int T, i;
    string str;
    cin >> T;
    while (T--)
    {
        cin.ignore();
        cin >> str;
        int len = str.length();
        int res = isEvenOrOdd(str, len);
        if (res == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
    return 0;
}
