// Write a program that takes an integer as input and prints its reverse.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num1 = -11;
    while (num1 < 1)
    {
        cout << "Please enter a number > 0: ";
        cin >> num1;
    }
    string number = to_string(num1);
    string reveredString = "";
    for (int i = number.length() - 1; i >= 0; i--)
    {
        reveredString += number[i];
    }
    num1 = stoi(reveredString);
    cout << "Reversed number is: " << num1 << endl;
    return 0;
}