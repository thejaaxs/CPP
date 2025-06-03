#include <iostream>
using namespace std;

int main()
{
    int rows;
    std::cout<<"Enter the Rows : ";
    cin >> rows;
    for (int i = 01; i <= rows; i++)
    {
        for (int j = 01; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}