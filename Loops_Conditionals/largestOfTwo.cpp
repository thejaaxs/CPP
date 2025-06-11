#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << a << " is Greater !" << endl;
    else if (b > a)
        cout << b << " is Greater !" << endl;
    else
        cout << "Both Are Equal !" << endl;
    return 0;
}