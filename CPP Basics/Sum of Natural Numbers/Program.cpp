// Write a program to take an integer N as input and print the sum of the first N natural numbers.
#include <iostream>
using namespace std;
int main()
{
    int naturalNumber, sum = 0;
    cout << "Enter a natural number (>0): ";
    cin >> naturalNumber;
    for (int i = 1; i <= naturalNumber; i++)
    {
        sum += i;
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}