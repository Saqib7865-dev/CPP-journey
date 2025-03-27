// Write a program that takes an integer as input and prints its reverse.
#include <iostream>
#include <string>
using namespace std;
void approach_1(int num1)
{
    string number = to_string(num1);
    string reveredString = "";
    for (int i = number.length() - 1; i >= 0; i--)
    {
        reveredString += number[i];
    }
    num1 = stoi(reveredString);
    cout << "Reversed number using appraoch_1 is: " << num1 << endl;
}
void approach_2(int num1)
{
    int reversed = 0;
    while (num1 > 0)
    {
        int lastDigit = num1 % 10;
        reversed = reversed * 10 + lastDigit;
        num1 = num1 / 10;
    }
    cout << "Reversed number using appraoch_2 is: " << reversed << endl;
}
int main()
{
    int num1 = -11;
    while (num1 < 1)
    {
        cout << "Please enter a number > 0: ";
        cin >> num1;
    }
    approach_1(num1);
    approach_2(num1);
    return 0;
}