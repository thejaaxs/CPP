// Make user enter the inputs until the x or X is entered !, then stop !
#include <iostream>
using namespace std;

int main()
{
    string input;
    int sum = 0;
    cout << "Enter input / Enter X to Stop : ";
    while (true)
    {
        cin >> input;
        if (input == "x" || input == "X")
            break;

        try
        {
            int num = stoi(input);
            sum += num;
        }
        catch (...)
        {
            cout << "Invalid Input !, Please Enter x to Stop !\n";
        }
    }
    cout << "The Sum is : " << sum;
    return 0;
}