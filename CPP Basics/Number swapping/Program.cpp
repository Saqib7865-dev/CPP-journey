// Swap two numbers using a temporary variable.
// Swap two numbers without using a temporary variable.
#include <iostream>
using namespace std;
void swapWithTemp(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "With temp\n";
    cout << "a: " << a << " b: " << b << endl;
}
void swapWithOutTemp(int a, int b)
{
    b = b + a;
    a = b - a;
    b = b - a;
    cout << "Without temp\n";
    cout << "a: " << a << " b: " << b << endl;
}
int main()
{
    int num1, num2;
    cout << "Enter first number (a): ";
    cin >> num1;
    cout << "Enter second number (b): ";
    cin >> num2;
    swapWithTemp(num1, num2);
    swapWithOutTemp(num1, num2);
    return 0;
}