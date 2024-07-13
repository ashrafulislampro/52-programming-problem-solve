#include <iostream>
using namespace std;

int main()
{
    int T, num, i;
    cin >> T;
    while (T--)
    {
        cin >> num;
        for (i = num; i >= 0; i--)
        {
            if (i < 2)
            {
                cout << i + 1;
            }
            else if (i > 1)
            {
                cout << "2^" << i;
            }

            if (i > 0)
            {
                cout << " + ";
            }
        }
        cout << endl;
    }

    return 0;
}