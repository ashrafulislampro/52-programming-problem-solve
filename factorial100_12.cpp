#include <iostream>
using namespace std;

int main()
{
    int T, num, zero_count;
    cin >> T;
    while (T--)
    {
        cin >> num;
        zero_count = 0;
        for (int i = 5; i <= num; i *= 5)
        {
            zero_count += num / i;
        }
        cout << zero_count << endl;
    }
    return 0;
}