#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;

    cout << "Enter a number for printed line : ";
    cin >> T;
    cin.ignore(); // add this line to ignore the newline character
    while (T--)
    {
        string str;
        cout << "Enter your preferred string : ";
        getline(cin, str);
        string ch = "";

        for (int i = 0; i < str.length(); i++)
        {
            if (isalpha(str[i]))
            {
                int pos = str[i] - 'A' + 1;
                ch += to_string(pos) + "";
            }
        }

        cout << "Result : " << ch << endl;
    }

    return 0;
}
