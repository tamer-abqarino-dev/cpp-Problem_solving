/*
Problem Description
Complete the solution so that it reverses the string passed into it.
'world'  =>  'dlrow'
'word'   =>  'drow'
*/

#include <string>
#include <iostream>
using namespace std ;

string reverseString(const string& str)
{
    string reversed = "" ;
    for (int i = str.length()-1 ; i >= 0 ; i-- )
    {
        reversed += str[i] ;
    }

    return reversed ;
}
int main()
{
    string str ;
    cout << "Enter the string you need to revers : " ;
    cin >> str ;
    string result = reverseString(str) ;
    cout << result ;
    return 0;
}
