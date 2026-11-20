/*
Description:
You were camping with your friends far away from home,
 but when it's time to go back, you realize that your fuel is
  running out and the nearest pump is 50 miles away! You know that on average,
   your car runs on about 25 miles per gallon. There are 2 gallons left.

Considering these factors, write a function that tells you if it is possible
 to get to the pump or not.

Function should return true if it is possible and false if not.
*/
#include <iostream>
using namespace std ;

bool PossibleReach (double distance , double mpg , double fuel_left )
{
    double GallonesNeeded = distance / mpg ;
    if (GallonesNeeded <= fuel_left)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

int main ()
{
    cout << "\n" << PossibleReach ( 50 , 25 , 3) << "\n" ; // 0 means false can't do it 
    cout << "\n" << PossibleReach ( 50 , 25 , 2) << "\n" ; // 1 means true can do it 
    return 0 ;
}