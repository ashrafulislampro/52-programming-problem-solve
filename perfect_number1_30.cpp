#include <iostream>
using namespace std;

int main()
{
    int T;
    unsigned long int num, i;
    unsigned long long sum;
    cin >> T;
    while (T--)
    {
        sum = 0;
        cin >> num;
        for (i = 1; i < num; i++)
        {

            if (num % i == 0)
            {
                sum += i;
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