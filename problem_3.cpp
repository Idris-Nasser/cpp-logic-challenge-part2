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

    for (int i= 1; i < Number; i++)
    {
        if (Number % i == 0)
        {
            sum += i;
        }
    }

    return Number == sum;
}

void printResult (int Number)
{
    if (isperfectNumber(Number) == true)
    {
        cout << Number << " is perfect Number.";
    }
    else
    {
        cout << Number << " is not perfect number.";
    }
}

main()
{
    printResult(ReadPositiveNumber("Please enter a positiv number: "));
}