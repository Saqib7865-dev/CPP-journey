// Write a program that takes an integer N and prints its multiplication table up to 10.
#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    while (number < 1)
    {
        cout << "Enter a number (>0): ";
        cin >> number;
    }
    for (int i = 1; i <= 10; i++)
    {
        cout << number << " * " << i << " = " << number * i << endl;
    }
    return 0;
}