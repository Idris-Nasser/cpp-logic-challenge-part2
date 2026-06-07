#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) // accept number of user.
{
    float Number;
    do              // use do_while for only eccept positive number.
    {
        cout << Message;
        cin >> Number;

    } while (Number <= 0);

    return Number; // retrn positive number.
}


void PrintSumOfDigits(int Number) // function to print Sum of digits.
{
    int Remainder = 0, sum = 0;

    while (Number > 0)
    {                           // example: Number = 1234.
        Remainder = Number %10; // remainder =  1234 % 10 = 4 .. 3 .. 2 .. 1
        Number = Number/10; // Number = 123 .. 12 .. 1 .. 0

        sum = sum + Remainder; // 10
    }
    cout << "sum of digits = " << sum << endl; // print result.
}

main()
{
    PrintSumOfDigits(ReadPositiveNumber("Enter a positive number please: "));
}