// Write a program that takes an integer as input and determines if it is even or odd.
#include <iostream>
using namespace std;
int main()
{
    int num1 = -1;
    while (num1 < 0 || num1 == 0)
    {
        cout << "Enter a number: ";
        cin >> num1;
        if (num1 < 0 || num1 == 0)
        {
            cout << "Number cannot be less than or equal to 0.\n";
        }
        if (num1 > 0 && num1 % 2 == 0)
        {
            cout << "Your number " << num1 << " is an even number" << endl;
        }
        else if (num1 > 0 && num1 % 2 != 0)
        {
            cout << "Your number " << num1 << " is an odd number" << endl;
        }
    }
}