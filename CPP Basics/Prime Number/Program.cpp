// Write a program that checks if a given number is prime.
#include <iostream>
using namespace std;
bool getPrime(int num)
{
    if (num == 2)
    {
        return true;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num = 1;
    while (num <= 1)
    {
        cout << "Please enter a number greater than 1: ";
        cin >> num;
    }
    bool isPrime = getPrime(num);
    if (isPrime)
    {
        cout << "Given number " << num << " is a prime number";
        return 0;
    }
    cout << "Given number " << num << " is not a prime number";
    return 0;
}