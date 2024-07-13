#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T, len, i;
    string str, new_str;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        getline(cin, str);
        len = str.length();
        new_str = "";
        for (i = len - 1; i >= 0; i--)
        {
            new_str += str[i];
        }

        if (str.compare(new_str) == 0)
        {
            cout << "Yes! It is palindrome!" << endl;
        }
        else
        {
            cout << "Sorry! It is not palindrome!" << endl;
        }
    }
    return 0;
}