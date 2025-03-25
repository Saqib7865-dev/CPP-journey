// Q. Write a C++ program that takes your name and age as input and prints:
// "Hello, [Your Name]! You are [Age] years old."
#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Hello " << name << "! You are " << age << " years old.";
}