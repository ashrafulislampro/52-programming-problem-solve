#include <iostream>
using namespace std;

long long gcd(long long x, long long y)
{
    long long temp;
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long num1, num2;
        cin >> num1 >> num2;

        long long lcd = (num1 * num2) / gcd(num1, num2);

        cout << "LCM" << " " << "=" << " " << lcd << endl;
    }

    return 0;
}