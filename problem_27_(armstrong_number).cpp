#include <iostream>
using namespace std;

int main()
{
    int T, rem, num, temp = 0, res = 0;
    cin >> T;

    while (T--)
    {

        cin >> num;

        temp = num;
        res = 0;

        while (temp != 0)
        {
            rem = temp % 10;
            res += (rem * rem * rem);
            temp /= 10;
        }

        if (num == res)
        {
            cout << num << " is an armstrong number!" << endl;
        }
        else
        {
            cout << num << " is not an armstrong number!" << endl;
        }
    }

    return 0;
}