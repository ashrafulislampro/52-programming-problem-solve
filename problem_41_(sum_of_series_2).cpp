#include <iostream>
#include <iomanip>
using namespace std;

long long factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int T, num, i;
    float sum;
    cin >> T;
    while (T--)
    {
        cin >> num;
        sum = 0.0;
        for (i = 1; i <= num; i++)
        {
            sum += i * 1.0 / factorial(i);
        }
        cout << fixed << setprecision(4) << sum << endl;
    }
    return 0;
}