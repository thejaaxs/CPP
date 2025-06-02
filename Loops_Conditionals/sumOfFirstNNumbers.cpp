#include <iostream>
using namespace std;

int main()
{
    int sum = 0, N;
    printf("Enter the value of N : ");
    cin >> N;
    for (int i = 0; i <= N; i++)
        sum += i;
    cout << "Sum : " << sum << endl;
    return 0;
}