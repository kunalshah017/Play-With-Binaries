#include <iostream>
#include <string>
using namespace std;
void ones_complement(int a[],int i){
    char b = 'v';
    for (int c = 0; c < i; c++)
    {
        if (a[c] != 0 && a[c] != 1)
        {
            cout << "\nInvalid Number";
            b = 'i';
            break;
        }
        if (a[c] == 0)
        {
            a[c] = 1;
        }
        else
        {
            a[c] = 0;
        }
    }
    if (b == 'i')
    {
        cout<<"Invalid number";
        exit(0);
    }
    else
    {
        cout << "\n1s Complement of the Binary Number is = ";
        for (int c = 0; c < i; c++)
        {
            cout << a[c];
        }
    }
}

void ones_complement_2(int a[],int i)
{
    //Perform XOR operation with 1111.... (No of ones = no of elements in a)
    for(int c=0;c<i;c++)
    {
        a[i] = a[i] ^ 1;
    }
    cout << "\n1's complement of the Binary Number is = ";
    for (int c = 0; c < i; c++)
    {
        cout << a[c];
    }
}
void two_complement(int a[],int i)
{
    int signbit = 0;
    /*Need to consider sign bit as there are chances that the number can be negative after taking the 2's complement.
    2's complement = 1's complement + 1;
    */
   int carry = 1;   //To keep track of carry at every step.
   int counter = 0;
   //Complementing the number
   for(int c=0;c<i;c++)
    {
        a[i] = a[i] ^ 1;
    }
   for(int c = i-1;c>=0;c--)
   {
        if(a[c] == 1 && carry==1)
        {
            carry = 1;
            a[c] = 0;
        }
        else if((a[c] == 1 && carry==0) || (a[c]==0 && carry==1))
        {
            carry = 0;
            a[c] = 1;
        }
        else
        {
            a[c] = 0;
            carry = 0;
        }
   }
    signbit = carry;
    cout << "\n2's complement of the Binary Number is = ";
    for (int c = 0; c < i; c++)
    {
        cout << a[c];
    }
    if(signbit == 1)
    cout<<"\n The number is negative";
    else
    cout<<"\n The number is positive";
}

int main()
{
    // hello this code calculates 1s complements of your binary number
    int i;
    cout << "no of digits of your binary no = ";
    cin >> i;
    int a[i];

    cout << "Enter a Binary Number = \n";
    for (int c = 0; c < i; c++)
    {
        cin >> a[c];
    }
    ones_complement(a,i);
    ones_complement_2(a,i);
    two_complement(a,i);
    return 0;
}