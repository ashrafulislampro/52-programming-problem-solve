#include <iostream>
using namespace std;

long long isFactorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * isFactorial(n - 1);
}

int main()
{
    int T, num;
    cin >> T;
    while (T--)
    {
        cin >> num;
        long long res = isFactorial(num);
        cout << res << endl;
    }
    return 0;
}