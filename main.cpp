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

    for (int c = 0; c < i; c++)
    {
        if (a[c] == 0)
        {
            a[c] = 1;
        }
        else
        {
            a[c] = 0;
        }
    }

    cout << "\n1s Complement of the Binary Number is = ";
    for (int c = 0; c < i; c++)
    {
        cout << a[c];
    }
    return 0;
}