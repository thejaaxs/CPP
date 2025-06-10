#include <iostream>
using namespace std;

int main()
{
    int a, b, lcm, hcf;
    cout << "Enter 2 Numbers : ";
    cin >> a >> b;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;
    lcm = (a * b) / hcf;
    cout << "HCF : " << hcf << endl;
    cout << "LCM : " << lcm << endl;
    return 0;
}