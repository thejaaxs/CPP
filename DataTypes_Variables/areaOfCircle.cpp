#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    float radius;
    printf("Enter the Radius : ");
    cin >> radius;
    cout << PI * radius * radius << endl;
    return 0;
}