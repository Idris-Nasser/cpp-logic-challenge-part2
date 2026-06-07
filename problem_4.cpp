#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    float Number;
    do
    {
        cout << Message;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

bool isperfectNumber(int Number)
{
    int sum = 0;
    for (int i= 1; i< Number; i++)
    {
        if (Number % i == 0)
        {
            sum += i;
        }
    }

    return sum == Number;
}

void printPerfectNumber(int Number)
{
    for(int i= 1; i < Number; i++) // n  عمل دواره لتحقق من الرقم من 1 الى
    {
        if (isperfectNumber(i)) // للتحقق من الرقم isperfectNumber استخدام الدالة 
        {
            cout << i << endl; // طباعة الرقم على الشاشة            
        }
    }
}


main()
{
    printPerfectNumber(ReadPositiveNumber("Enter a number: "));
}