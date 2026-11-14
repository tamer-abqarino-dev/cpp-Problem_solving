/*
problem description
Given a month as an integer from 1 to 12, return to which quarter of the year it belongs as an integer number.

For example: month 2 (February), is part of the first quarter; month 6 (June), 
is part of the second quarter; and month 11 (November), is part of the fourth quarter.

Constraint:

1 <= month <= 12
*/

#include <iostream>
using namespace std;

int main() {
    int month ;
    cout << "Enter the month : " << endl;
    cin >> month ;
    if ( 1 <= month && month <= 3 )
    {
        cout << month << "  month is in the 1st quarter" ;
    }
    else if (4 <= month && month <= 6)
    {
        cout << month << "  month is in the 2nd quarter" ;
    }
    else if (7 <= month && month <= 9)
    {
        cout << month << "  month is in the 3rd quarter" ;
    }
    else if (10 <= month && month <= 12)
    {
        cout << month << "  month is in the 4th quarter" ;
    }
    else 
    {
        cout << "you are joking this month not in the year !!" ;
    }

    return 0;
}
