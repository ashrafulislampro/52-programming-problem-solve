#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, len, i;
    string str;
    cin >> T;

    while (T--)
    {
        cin.ignore();
        cin >> str;
        len = str.length();

        for (i = 0; i < len; i++)
        {
            if (str[i] == 'L')
            {
                str[i] = str[i - 1];
            }
            else if (str[i] == 'R')
            {
                str[i] = str[i + 1];
            }
        }

        cout << str << endl;
    }
    return 0;
}