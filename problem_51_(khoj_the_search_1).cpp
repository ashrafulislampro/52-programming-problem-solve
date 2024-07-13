#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, temp, exist_ind;
    bool isfound;
    string str1, str2;
    cin >> T;
    while (T--)
    {
        isfound = false;
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
                        isfound = true;
                        temp = 0;
                        break;
                    }
                }
                else
                {
                    temp = 0;
                    break;
                }
            }
            if (isfound)
            {
                exist_ind = i;
                break;
            }
        }
        cout << exist_ind << endl;
    }
    return 0;
}