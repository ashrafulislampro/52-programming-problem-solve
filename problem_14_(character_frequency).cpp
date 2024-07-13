#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, count, i;
    string str;
    char ch;
    cin >> T;

    while (T--)
    {
        cin.ignore();
        getline(cin, str);
        ch = cin.get();
        count = 0;
        int len = str.length();

        for (i = 0; i < len; i++)
        {
            if (str[i] == ch)
            {
                count++;
            }
        }
        if (count > 0)
        {
            cout << "Occurrence of \'" << ch << "\' in \'" << str << "\' = " << count << endl;
        }
        else
        {
            cout << ch << " is not present" << endl;
        }
    }
    return 0;
}