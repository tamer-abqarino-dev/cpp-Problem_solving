/*
Problem description
Create a function that takes an integer as an argument and returns 
"Even" for even numbers or "Odd" for odd numbers.
*/

#include <iostream>
using namespace std ;

int main()
{
    int num ;
    cout << "Enter the number you need to detect : \n" ;
    cin >> num ;
    if (num % 2 == 0)
    {
        cout << "Even number" ;
    }
    else
    {
        cout << "Odd number" ;
    }

    return 0 ;
}