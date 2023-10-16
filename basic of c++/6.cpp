#include <iostream>
using namespace std;
int main()
{
    // {   1 to 100 even numbers
    for (int i = 1; i <= 100; i = i + 1)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    // 19 ka table
    for (int i = 19; i <= 190; i = i + 19)
    {
        cout << i << endl;
    }
    // 11 times name print
    for (int i = 1; i < 12; i = i + 1)
    {
        cout << "udit" << endl;
    }
}
