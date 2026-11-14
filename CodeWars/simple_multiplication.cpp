/*
problem description
This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.
*/

#include <iostream>
using namespace std ;

int main ()
{
    // first solution 
    int num ;
    cout << "Enter the number : " ;
    cin >> num ;
    int module = num % 2 ;
    if ( module == 0 )
    {
        cout << "This number is even so the output is : " << num << "*8 = " << num*8 << "\n" ;
    }
    else 
    {
        cout << "This number is odd so the output is : " << num << "*9 = " << num*9 << "\n" ;
    }

    // second solution 
    int num2 ;
    cout << "Enter the number : " ;
    cin >> num2 ;
    bool modulation = false ;
    if ( num2 % 2 != 0 )
    {
        modulation = true ;
        cout << "This number is odd so the output is : " << num2 << "*9 = " << num2*9 << "\n" ;
    }
    else
    {
        cout << "This number is even so the output is : " << num2 << "*8 = " << num2*8 << "\n" ;
    }
    
    // third solution 
    int num3 ;
    cout << "Enter the number : " ;
    cin >> num3 ;
    int value = (num3%2 == 0) ? num3*8 : num3*9 ; 
    cout << value ;


    return 0;
}