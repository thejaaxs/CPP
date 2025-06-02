#include <iostream>
using namespace std;

int main()
{
    int number, digit, count = 0;
    std::cout << "Enter the Number : ";
    cin >> number;
    std::cout << "Enter the Digit : ";
    cin >> digit;
    while (number > 0)
    {
        int rem = number % 10;
        if (rem == digit)
            count++;
        number /= 10;
    }
    std::cout << "The Digit repeated " << count << " Times" << std::endl;
    return 0;
}