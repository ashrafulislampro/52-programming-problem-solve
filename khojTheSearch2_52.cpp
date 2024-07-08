#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, count, temp;
    string str1, str2;
    cin >> T;
    while (T--)
    {

        count = 0;
        temp = 0;
        cin.ignore();
        cin >> str1 >> str2;
        int len1 = str1.length();
        int len2 = str2.length();

        for (int i = 0; i < len1; i++)
        {
            for (int j = 0; j < len2; j++)
            {
                if (str1[i + j] == str2[j])
                {
                    temp++;

                    if (temp == len2)
                    {

                        count++;
                        temp = 0;
                    }
                }
                else
                {
                    temp = 0;
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}