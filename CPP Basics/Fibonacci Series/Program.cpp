// Print the first N numbers of the Fibonacci sequence.
#include <iostream>
using namespace std;
int getFabonacci(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    if (num >= 2)
        return (getFabonacci(num - 2) + getFabonacci(num - 1));
    return 0;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << getFabonacci(i) << ' ';
    }
    return 0;
}