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
    long long lcm, num1, num2;
    cin >> T;
    while (T--)
    {
        cin >> num1 >> num2;
        lcm = (num1 * num2) / gcd(num1, num2);

        cout << "LCM = " << lcm << endl;
    }
    return 0;
}