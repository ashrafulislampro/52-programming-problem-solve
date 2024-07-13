#include <iostream>
using namespace std;

int main()
{
    int T, sum, i, num;
    cin >> T;
    while (T--)
    {
        cin >> num;
        sum = 0;
        for (i = 1; i <= 5; i++)
        {
            int rem = num % 10;
            num /= 10;
            if ((i == 1) || (i == 5))
            {
                sum += rem;
            }
        }
        cout << "Sum" << " = " << sum << endl;
    }
    return 0;
}