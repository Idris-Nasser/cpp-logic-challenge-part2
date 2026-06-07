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

int CountFrequancey(int Number, short Digitcheck)
{
    int Remainder = 0;
    short Frequency = 0;
    while (Number != 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        if (Remainder == Digitcheck)
        {
            Frequency ++;
        }
    }
    return Frequency;
}

void PrintAllNumberFrequency(int Number)
{
    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = CountFrequancey(Number, i);
        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequency " << DigitFrequency << " Time(s)" << endl;
        }
    }
}

main()
{
    int Number = ReadPositiveNumber("Enter a number please: ");
    PrintAllNumberFrequency(Number);
}