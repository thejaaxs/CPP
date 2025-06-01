#include <iostream>
using namespace std;
int main()
{
    int big = 2147483647;
    cout << "Original : " << big << endl;
    big += 1;
    cout << "After Overflow : " << big << endl;
    return 0;
}