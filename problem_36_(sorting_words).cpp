#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int T, N;
    string str;
    cin >> T;

    while (T--)
    {
        cin >> N;
        cin.ignore();
        vector<string> strarr;
        for (int i = 0; i < N; i++)
        {
            getline(cin, str);
            strarr.push_back(str);
        }
        sort(strarr.begin(), strarr.end());
        for (int i = 0; i < N; i++)
        {
            cout << strarr[i] << endl;
        }
    }
    return 0;
}