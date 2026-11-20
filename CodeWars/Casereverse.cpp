/*
Define String.prototype.toAlternatingCase
(or a similar function/method such as
to_alternating_case/toAlternatingCase/ToAlternatingCase 
in your selected language; see the initial solution for details)
such that each lowercase letter becomes uppercase and each uppercase letter
becomes lowercase. 
*/

#include <iostream>
#include <cctype>
using namespace std ;

int main ()
{
    string word ;
    cout << "Enter the word you need : " ;
    getline (cin , word) ;

    string Casereverse = "" ;
    for(int i = 0 ; i < word.size() ; i++)
    {
        if(isupper(word[i]))
        {
            Casereverse += tolower(word[i]);
        }
        else if(islower(word[i]))
        {
            Casereverse += toupper(word[i]);
        }
        else
        {
            Casereverse += word[i] ;
        }
    }
    cout << Casereverse ;
    return 0 ;
}