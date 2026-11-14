/*
Problem description
Accountant time! For a given quantity and price (per mango), calculate the total cost of the mangoes.
But! Every third mango is free!
*/
#include <iostream>
using namespace std ;

int main ()
{
    int price_for_each ;
    int quantity ;
    
    cout << "Enter the number of magoes : \n" ;
    cin >> quantity ;
    cout << "Enter the price for each mango \n" ;
    cin >> price_for_each ;

    int freemango = quantity / 3 ;
    int price_total_cost = ( quantity - freemango ) * price_for_each ;

    cout << "The total cost is : " << price_total_cost << "\n" ;

    return 0 ;
}

