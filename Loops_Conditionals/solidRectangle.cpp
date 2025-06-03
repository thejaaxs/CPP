#include <iostream>
using namespace std;

int main()
{
    int R, C;
    std::cout << "Enter R" << " & Enter C : ";
    cin >> R >> C;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << "*"<<" ";
        }
        cout << endl;
    }
    return 0;
}