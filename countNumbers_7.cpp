#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int T, count;
    string num_str;
    cin >> T;

    while (T--)
    {
        cin.ignore();
        count = 0;
        getline(cin, num_str);
        stringstream stream(num_str);
        int num;
        while (stream >> num)
        {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}