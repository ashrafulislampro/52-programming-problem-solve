#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, i, n1, n2, sum;
    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2;
        sum = 0;
        for(i = 0; i <= n2; i++){
            sum += pow(n1, i);
        }

        // Second Solution with formula
        // if (n1 == 1)
        // {
        //     for (i = 0; i <= n2; i++)
        //     {
        //         sum += 1;
        //     }
        // }
        // else
        // {
        //     sum = (pow(n1, n2 + 1) - 1) / (n1 - 1);
        // }

        cout << "Result = " << sum << endl;
    }
    return 0;
}