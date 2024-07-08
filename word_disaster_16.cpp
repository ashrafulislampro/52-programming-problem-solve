#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int T;
    string str;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        getline(cin, str);
        stringstream stream(str);
        string word;
        string result = "";
        while (stream >> word)
        {
            int size = word.size();
            for (int i = size - 1; i >= 0; i--)
            {
                result += word[i];
            }
            result += " ";
        }
        cout << result << endl;
    }
    return 0;
}