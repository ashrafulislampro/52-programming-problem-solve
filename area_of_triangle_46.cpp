#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int T, a, b, c;
    float s, area;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c;
        s = 0.0;
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << fixed << setprecision(3) << "Area = " << area << endl;
    }
    return 0;
}