#include <iostream>
#include <math.h>
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


int ReversNumber(int Number)
{
    int Remainder = 0, Number2 = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        
        Number2 = Number2 * 10 + Remainder;
    }  
    
    return Number2;
}

main()
{
    cout << ReversNumber(ReadPositiveNumber("please Enter positive number : "));
}