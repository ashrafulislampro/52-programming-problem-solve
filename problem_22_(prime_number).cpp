#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n)
{
    int i, root = sqrt(n);
    for (i = 2; i <= root; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int T, i, count, num1, num2;
    cin >> T;
    while (T--)
    {
        cin >> num1 >> num2;
        count = 0;
        for (i = num1; i <= num2; i++)
        {
            if (isPrime(i))
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}