#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, rev = "";
    cout << "Enter the String : ";
    cin >> str;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev += str[i];
    }
    if (str == rev)
        cout << str << " is a Palindrome";
    else
        cout << str << " is not a Palindrome";
    return 0;
}