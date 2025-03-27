// Write a program that takes an integer N and prints N! (factorial of N).
#include <iostream>
using namespace std;
int main()
{
    int num, factorial = 1;
    cout << "Enter a number greater than 0: ";
    cin >> num;
    for (int i = num; i >= 1; i--)
    {
        factorial *= i;
    }
    cout << "Factorial: " << factorial << endl;
    return 0;
}