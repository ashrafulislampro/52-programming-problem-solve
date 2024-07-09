#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int T, count;
    string str;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        getline(cin, str);
        count = 0;
        stringstream stream(str);
        string word;
        while (stream >> word)
        {
            count++;
        }
        cout << "Count = " << count << endl;
    }
    return 0;
}