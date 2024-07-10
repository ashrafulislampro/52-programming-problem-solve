#include <iostream>
using namespace std;

int main()
{
    int T, num, rev;
    cin >> T;
    while (T--)
    {
        cin >> num;
        rev = 0;
        while (num != 0)
        {
            rev = rev * 10;
            rev = rev + num % 10;
            num /= 10;
        }
        cout << rev << endl;
    }
    return 0;
}