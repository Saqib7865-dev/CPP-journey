// Take a student's marks (0–100) as input and print their grade based on the following:

//     90-100: A

//     80-89: B

//     70-79: C

//     60-69: D

//     Below 60: F

#include <iostream>
using namespace std;
int main()
{
    int marks;

    do
    {
        cout << "Enter student marks (0 - 100): ";
        cin >> marks;
    } while (marks < 0 || marks > 100);
    
    if (marks > 90 && marks <= 100)
    {
        cout << "Your grade is: A" << endl;
        return 0;
    }
    else if (marks > 80 && marks <= 89)
    {
        cout << "Your grade is: B" << endl;
        return 0;
    }
    else if (marks > 70 && marks <= 79)
    {
        cout << "Your grade is: C" << endl;
        return 0;
    }
    else if (marks > 60 && marks <= 69)
    {
        cout << "Your grade is: D" << endl;
        return 0;
    }
    else if (marks < 60)
    {
        cout << "Your grade is: F" << endl;
        return 0;
    }
}