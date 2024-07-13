#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    unsigned long int num, i, sqrt_num;
    unsigned long long sum;
    cin >> T;
    while (T--)
    {
        sum = 1;
        cin >> num;
        sqrt_num = sqrt(num);
        for (i = 2; i <= sqrt_num; i++)
        {

            if (num % i == 0)
            {
                sum = sum + i + num / i;
            }
        }
        if (num == sum)
        {
            cout << "YES, " << num << " is a perfect number!" << endl;
        }
        else
        {
            cout << "NO, " << num << " is not a perfect number!" << endl;
        }
    }
    return 0;
}