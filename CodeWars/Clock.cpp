/*
Description:
Clock shows h hours, m minutes and s seconds after midnight.

Your task is to write a function which returns 
the time since midnight in milliseconds.

Example:
h = 0
m = 1
s = 1

result = 61000
*/

#include <iostream>
using namespace std ;

int main ()
{
    int hours ;
    int min ;
    int sec ;
    cout << "Enter the hours => " ;
    cin >> hours ;
    cout << "Enter the minutes => " ;
    cin >> min ;
    cout << "Enter the seconds => " ;
    cin >> sec ;
    int TotalSec = (hours * 60 * 60) + (min * 60) + (sec) ;
    int Milisec = (TotalSec) * 1000 ;
    cout << "The number of miliseconds is : " << Milisec << " ms \n" ;
    cout << "The total seconds is " << TotalSec << " s \n" ;

    return 0 ;
}