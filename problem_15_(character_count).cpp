#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, i, j, count;
    string str;
    cin >> T;
    cin.ignore();
    while (T--)
    {

        getline(cin, str);
        int len = str.length();

        for (i = 0; i < len; i++)
        {
            count = 0;
            for (j = 0; j < len; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                }
            }

            for (j = 0; j <= i; j++)
            {
                if (str[i] == str[j - 1])
                {
                    break;
                }
                else if (i == j || i == j - 1)
                {
                    cout << str[i] << " = " << count << endl;
                }
            }
        }
        if (T != 0)
        {
            cout << endl;
        }
    }

    return 0;
}