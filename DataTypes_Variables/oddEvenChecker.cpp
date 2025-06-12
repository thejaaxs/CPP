#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any Number : ";
    cin >> n;
    if (n % 2 == 0)
        cout << n << " is a Even Number !";
    else
        cout << n << " is a Odd Number !";
    return 0;
}