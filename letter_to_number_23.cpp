#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, i, len;
    string str;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        getline(cin, str);
        len = str.length();
        for (i = 0; i < len; i++)
        {
            cout << str[i] - 'A' + 1;
                }

        cout << endl;
    }
    return 0;
}