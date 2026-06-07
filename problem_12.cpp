#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    float Number;
    do
    {
        cout << Message;
        cin >> Number;

    } while (Number < 0);
    
    return Number;
}

int reverseNumber(int Number)
{
    int Remainder = 0;
    int Number2 = 0;
    while (Number != 0)
    { // for revers Number 
        Remainder = Number % 10;
        Number /= 10;
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}

void PrintNumber(int Number)
{
    while (Number != 0)
    { // for print Number by order 
        int Remainder = Number % 10;
        Number /= 10;
        for (int i = 1; i <= Remainder; i++)
        {
            cout << Remainder;
        }
        cout << endl;
    }
}

main()
{
    PrintNumber(reverseNumber(ReadPositiveNumber("Enter a positive Number: ")));
}