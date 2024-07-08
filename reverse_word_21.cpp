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
        for (i = len - 1; i >= 0; i--)
        {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
