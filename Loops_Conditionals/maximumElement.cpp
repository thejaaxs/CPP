#include <iostream>
using namespace std;

int main()
{
    int N;
    std::cout << "Enter the size of Array : " << std::endl;
    cin >> N;
    int arr[N];
    std::cout << "Enter the Array Elements : " << std::endl;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int maxVal = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    std::cout << "The Maximum Element is : " << maxVal << std::endl;
}