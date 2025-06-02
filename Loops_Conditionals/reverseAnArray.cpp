#include <iostream>
using namespace std;

int main()
{
    int N;
    std::cout << "Enter The Size of the Array : " << std::endl;
    cin >> N;
    int arr[N];
    std::cout << "Enter the Array Elements : " << std::endl;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = N - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}