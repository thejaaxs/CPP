#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;
    std::cout << "Enter the Size of the Array : " << std::endl;
    cin >> N;
    int arr[N];
    std::cout << "Enter the Array Elements : " << std::endl;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    std::cout << "The Sum Of Elements in the Array is : " << sum << std::endl;
    return 0;
}