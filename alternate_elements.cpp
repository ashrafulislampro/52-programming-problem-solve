#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int num;
        cin >> num;
        int *arr = new int[num];
        
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }

        for (int j = 0; j < num; j += 2)
        {
            cout << arr[j];
            if(j<num-2)
            cout << " ";
        }
        cout<<endl;
        delete[] arr;
    }
    
    

    return 0;
}