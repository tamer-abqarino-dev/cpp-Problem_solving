/*
Problem description
Create a function that checks if a number n is divisible by two numbers x AND y. 
All inputs are positive, non-zero numbers.
*/

#include <iostream>
using namespace std ;
int main ()
{
    int n ;
    int x ;
    int y ;
    cout << "Enter the number to be checked : \n" ;
    cin >> n ;
    cout << "\n Enter the two numbers you need to show if your number is diviible by: \n" ;
    cin >> x >> y ;
    cout << "n = " << n << "," ;
    cout << "x = " << x << "," ;
    cout << "y = " << y << ", => " ;
    if ( n > 0 && n%x == 0 && n%y == 0)
    {
        cout << "True because "<< n << " is divisible by " << x << "," << y ;
    }
    else if (n > 0 && n%x != 0 && n%y == 0)
    {
        cout << "False because "<< n << " is not divisible by " << x  ;
    }
    else if (n > 0 && n%x == 0 && n%y != 0)
    {
        cout << "False because "<< n << " is not divisible by " << y  ;
    }
    else if (n > 0 && n%x != 0 && n%y != 0)
    {
        cout << "False because "<< n << " is nither divisible by " << x << " nor " << y ;
    }
    return 0 ;
}