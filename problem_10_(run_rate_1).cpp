#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T, r1, r2, B;
    float cur_run_rate, req_run_rate;

    cin >> T;
    while (T--)
    {
        cin >> r1 >> r2 >> B;

        cur_run_rate = ((r2 * 1.0) / (300 - B)) * 6.0;
        if (r1 < r2)
        {
            req_run_rate = 0.00;
        }
        else
        {
            req_run_rate = (((r1 - r2 + 1) * 1.0) / B) * 6.0;
        }

        cout << fixed << setprecision(2) << cur_run_rate << " " << fixed << setprecision(2) << req_run_rate << endl;
    }

    return 0;
}