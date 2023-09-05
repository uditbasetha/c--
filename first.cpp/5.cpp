#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 3; i = i + 1)
    {
        cout << endl
             << "outer loop" << i << endl
             << endl;
        for (int j = 0; j <= 3; j = j + 1)
        {
            cout << "inner loop" << j << endl;
        }
    }
    // for (int i = 20; i <= 100; i = i + 2)
    // {
    //     cout << i << endl;
    // }

    //     for (int i = 10; i >= 0; i = i - 1)
    //     {
    //         cout << i << endl;
    //     }

    // for (int i = 1; i <= 5; i = i + 1)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 2; i <= 10; i = i + 2)
    // {
    //     cout << i << endl;
    // }

    // int num;
    // cin >> num;
    // cout << "enter number" << endl;

    // if (num % 2 == 0)
    // {
    //     cout << "even number";
    // }
    // else
    // {
    //     cout << "odd number" << endl;
    // }
}
