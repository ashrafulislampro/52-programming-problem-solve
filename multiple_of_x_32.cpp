#include <iostream>
using namespace std;

int main()
{
    int T, x, n;
    cin >> T;
    while (T--)
    {
        cin >> x >> n;
        if (x < n)
        {
            for (int i = x; i <= n; i += x)
            {
                cout << i << endl;
            }
        }
        else
        {
            cout << "Invalid!" << endl;
        }
        cout << endl;
    }

    return 0;
}

//  int T, x, n;
//     scanf("%d", &T); // Using scanf for faster input
//     while (T--)
//     {
//         scanf("%d %d", &x, &n); // Using scanf for faster input
//         if (x < n)
//         {
//             int i = x;
//             while (i <= n)
//             {
//                 printf("%d\n", i); // Using printf for faster output
//                 i += x;
//             }
//         }
//         else
//         {
//             printf("Invalid!\n"); // Using printf for faster output
//         }
//         printf("\n");
//     }