#include <iostream>
using namespace std;

int main()
{
    char ch;
    int T;
    cin >> T;

    while (T--)
    {
        // cin >> ws;
        // cin.ignore();
        // ch = cin.get();
        cin >> ch;

        if (ch >= 'a' && ch <= 'z')
        {
            cout << "Lowercase Character" << endl;
        }

        else if (ch >= 'A' && ch <= 'Z')
        {
            cout << "Uppercase Character" << endl;
        }
        else if (ch >= '0' && ch <= '9')
        {
            cout << "Numerical Digit" << endl;
        }
        else
        {
            cout << "Special Character" << endl;
        }
    }

    return 0;
}
