#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i;
    cout << "no of digits of your binary no = ";
    cin >> i;
    int a[i];

    cout << "Enter a Binary Number = ";
    for (int c = 0; c < i; c++)
    {
        cin >> a[c];
    }
    cout << "your binary number is = ";
    for (int c = 0; c < i; c++)
    {
        cout << a[c];
    }

    return 0;
}