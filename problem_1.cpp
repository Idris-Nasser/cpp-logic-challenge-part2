#include <iostream>
using namespace std;

void printTableHead()
{
    cout << "\n\t\t\tMultipliacation Table From 1 to 10 \t\t\t\t\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n------------------------------------------------------------------------------------\n";
}

string printspace(int i)
{
    if (i < 10)
        return "    |";
    else 
        return "   |";
}

void printMultiplication()
{
    printTableHead();
    for (int i = 1; i <= 10; i++)
    {
        cout << "" << i ;
        cout << printspace(i);
        for (int j = 1; j <= 10; j++)
        {
            cout << "\t";
            cout << i*j;
        }
        cout << endl;
    }
}

main()
{
    printMultiplication();

    return 0;
}