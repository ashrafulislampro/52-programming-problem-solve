#include <iostream>

using namespace std;

int main()
{

    int i;
    for (i = 1; i <= 1000; i++)
    {
        cout << i;
        if (i % 5 != 0)
        {
            cout << " ";
        }
        if (i % 5 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}