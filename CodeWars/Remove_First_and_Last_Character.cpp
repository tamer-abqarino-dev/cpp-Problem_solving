/*
Task
Your goal is to write a function that removes the first and last characters of a string. 
You're given one parameter, the original string.

Important: Your function should handle strings of any length ≥ 2 characters. 
For strings with exactly 2 characters, return an empty string.

Examples
'eloquent' --> 'loquen'
'country'  --> 'ountr' 
'person'   --> 'erso'
'ab'       --> '' (empty string)
'xyz'      --> 'y'
*/
#include <iostream>
#include <string>

using namespace std ;

int main ()
{
    string word ;
    cout << "Enter the word you need : \n" ;
    cin >> word ;
    cout << "The word contains " << word.size() << " Characters \n" ;
    string afterdeletion = "" ;
    for(int i = 0 ; i < word.size() ; i++ )
    {
        if (i == 0 || i == ( word.size() - 1 ))
        continue;
        afterdeletion += word[i] ;
    }
    cout << "The word after is : " << afterdeletion ;
    return 0;
}
