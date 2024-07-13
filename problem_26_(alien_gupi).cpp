#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int day = 0;
        double x;
        cin >> x;
        while (x > 1.0)
        {
            x = x / 2;
            day++;
        }
        cout << day << " days" << endl;
    }
    return 0;
}