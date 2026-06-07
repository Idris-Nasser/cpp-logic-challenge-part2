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

void PrintDigits(int Number)
{
    int Remainder = 0;
    while(Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        cout << Remainder << endl;
    }
}


main()
{
    PrintDigits(ReadPositiveNumber("please Enter a positive Number: "));
}