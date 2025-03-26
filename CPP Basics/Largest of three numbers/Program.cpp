// Write a program that takes three numbers as input and prints the largest one.
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "Largest number is: " << num2 << endl;
            return 0;
        }
        cout << "Largest number is: " << num3 << endl;
        return 0;
    }
    else if (num2 > num1)
    {
        if (num2 > num3)
        {
            cout << "Largest number is: " << num2 << endl;
            return 0;
        }
        cout << "Largest number is: " << num3 << endl;
        return 0;
    }
}