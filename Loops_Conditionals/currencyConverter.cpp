#include <iostream>
using namespace std;

int main()
{
    float rupees;
    const float USD_RATE = 83.00;
    cout << "Enter Indian Rupees : ";
    cin >> rupees;
    float dollars = rupees / USD_RATE;
    cout << "Equivalent in USD : $" << dollars;
    return 0;
}