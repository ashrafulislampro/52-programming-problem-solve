#include <iostream>
using namespace std;

int main()
{
    int T, N, i, j;
    cin >> T;
    while (T--)
    {
        cin >> N;
        for (i = 0; i <= N; i++)
        {
            for (j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    cout << 1;
                    if (i == 0)
                    {
                        break;
                    }
                }
                if (i > 1)
                {
                    // if(){
                    //     cout << " ";
                    // }
                    cout << i + j;
                }
                if (j < N)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}