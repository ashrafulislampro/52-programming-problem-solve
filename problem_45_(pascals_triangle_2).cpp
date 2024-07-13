#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;

    while (T--)
    {
        cin >> N;
        long long int pascal[51][51] = {0}; // Initialize a 2D array to store Pascal's Triangle values

        for (int i = 0; i <= N; ++i)
        {
            pascal[i][0] = 1; // First element in every row is 1
            
            
            for (int j = 1; j <= i; ++j)
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j]; // Sum of the two elements above it
            }
            pascal[i][i] = 1; // Last element in every row is 1
        }

        // Print Pascal's Triangle
        for (int i = 0; i <= N; ++i)
        {
            for (int j = 0; j <= i; ++j)
            {
                cout << pascal[i][j];
                if (j < i)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}