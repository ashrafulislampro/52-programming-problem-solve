#include <iostream>
using namespace std;

int main()
{
    int T, count, len;
    string str;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        getline(cin, str);
        count = 0;
        len = str.length();
        for (int i = 0; i < len; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                count++;
            }
        }
        cout << "Number of vowels = " << count << endl;
    }
    return 0;
}