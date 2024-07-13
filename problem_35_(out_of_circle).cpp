#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, xc, yc, x2, y2, r, d;
    cin >> T;
    while (T--)
    {
        cin >> xc >> yc;
        cin >> r;
        cin >> x2 >> y2;
        d = sqrt(pow(x2 - xc, 2) + pow(y2 - yc, 2));
        if (r > d)
        {
            cout << "The point is inside the circle" << endl;
        }
        else
        {
            cout << "The point is not inside the circle" << endl;
        }
    }
    return 0;
}