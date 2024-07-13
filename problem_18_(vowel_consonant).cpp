#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T, len, i;
    string str, vowel_str, consonant_str;
    cin >> T;
    cin.ignore();
    while (T--)
    {

        getline(cin, str);
        vowel_str = "";
        consonant_str = "";
        len = str.length();
        for (i = 0; i < len; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowel_str += str[i];
            }
            else if (str[i] != ' ')
            {
                consonant_str += str[i];
            }
        }
        cout << vowel_str << endl
             << consonant_str << endl;
    }
    return 0;
}
