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
    PrintNumber(ReadPositiveNumber("Enter a Number: "));
}