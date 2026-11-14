/*
Problem description 
Given a year, return the century it is in.
*/

#include <iostream>
using namespace std ;

int main ()
{
    int year ;
    cout << "Hint!\n" ;
    cout << "You give us the year and we give you the century\n" ;
    cout << "================================================\n" ;
    cout << "Enter the year : " ;
    cin >> year ;
    if (year%100 == 0)
    {
        cout << "The century is : " << year / 100 ;
    }
    else
    {
        cout << "The century is : " <<  year / 100 + 1 ;
    }
    return 0 ;
}