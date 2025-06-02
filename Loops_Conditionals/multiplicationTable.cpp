#include <iostream>
using namespace std;

int main()
{
    int n;
    std::cout << "Enter the Number : ";
    cin >> n;
    for (int i = 01; i <= 10; i++)
    {
        std::cout << n << " X " << i << " = " << n * i << std::endl;
    }
    return 0;
}