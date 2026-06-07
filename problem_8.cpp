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

int countDigitFrequency(int Number, short DigitToCheck)
{
    int Remainder = 0;
    short FrequencyCount = 0;
    
    while (Number > 0)
    {
       Remainder = Number % 10;
       if (DigitToCheck == Remainder)
       {
            FrequencyCount ++;
       }
       Number = Number / 10;
    }
        
    return FrequencyCount;
}


main()
{
    int Number = ReadPositiveNumber("Please enter main number: ");
    short DigitToCheck = ReadPositiveNumber("please enter one Digit to check: ");

    cout << "\nDigit " << DigitToCheck << " Frequency " << countDigitFrequency(Number, DigitToCheck) << " Time(s)" << endl;
}
