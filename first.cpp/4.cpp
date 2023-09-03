#include <iostream>
using namespace std;
int main()
{

    int num;
    cin >> num;
    cout << "number dalo :" << num << endl;

    if (num > 0)
    {
        cout << "positive integer" << endl;
    }
    else if (num < 0)
    {
        cout << " negative nteger" << endl;
    }
    else
    {
        cout << "it is zero" << endl;
    }
}