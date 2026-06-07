#include <iostream>
#include <math.h>
using namespace std;

enum enPrimeNotprime  {Prime = 1, Notprime = 2};

int ReadPositiveNumber(string Message)
{
    float Number;
    do
    {
        cout << Message ;
        cin >> Number;

    } while (Number <= 0);

    return Number;
    
}

enPrimeNotprime Checkprime(int Number)
{
    int M = round(Number / 2);
    for(int counter= 2; counter <= M ; counter++)
    {
        if(Number % counter == 0)
        {
            return enPrimeNotprime::Notprime;
        }
    }

    return enPrimeNotprime::Prime;
}

void PrintPrimeNumberFrom1ToN(int Number)
{
    cout << "\n";
    cout << "Prime Numbers from " << 1 << " To " << Number;
    cout << " are : " << endl;
    for (int i = 1; i <= Number; i++)
    {
        if (Checkprime(i) == enPrimeNotprime::Prime)
        {
            cout << i << endl;
        }
    }
}

main()
{
    PrintPrimeNumberFrom1ToN(ReadPositiveNumber("Please Enter a positive Number: "));

    return 0;
}