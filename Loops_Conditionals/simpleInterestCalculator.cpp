#include <iostream>
using namespace std;

int main()
{
    int P, T, R, SI;
    cout << "Enter Principal Amount , Time , Rate Of Interest : ";
    cin >> P >> T >> R;
    SI = (P * R * T) / 100;
    cout << "The Simple Interest : " << SI;
    return 0;
}