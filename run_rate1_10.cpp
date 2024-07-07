#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T, r1, r2, B;
    double cur_run_rate, req_run_rate;

    cin >> T;
    while (T--)
    {
        cin >> r1 >> r2 >> B;        

        cur_run_rate = ((r2 * 1.0) / (300 - B)) * 6;
        req_run_rate = (((r1 - r2 + 1) * 1.0) / B ) * 6;
        cout << fixed << showpoint;
        cout << setprecision(2);
        cout << cur_run_rate << " " << req_run_rate << endl;
    }

    return 0;
}