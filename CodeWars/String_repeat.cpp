/*
Description:
Write a function that accepts a non-negative integer n and a string s as parameters, 
and returns a string of s repeated exactly n times.

Examples (input -> output)
6, "I"     -> "IIIIII"
5, "Hello" -> "HelloHelloHelloHelloHello"
*/
#include <iostream>
#include <string>
using namespace std ;
void repeatfunc (int repeatnum , string word)
{
    for ( int i = 0 ; i < repeatnum ; i++ )
    {
        cout << word ;
    }
}

int main ()
{
    repeatfunc(4, "*") ;
    return 0 ;
}