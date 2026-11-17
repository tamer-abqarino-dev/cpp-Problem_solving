/*
Description:
Write a function that removes the spaces from the string, 
then return the resultant string.

Examples (Input -> Output):

"8 j 8   mBliB8g  imjB8B8  jl  B" -> "8j8mBliB8gimjB8B8jlB"
"8 8 Bi fk8h B 8 BB8B B B  B888 c hl8 BhB fd" -> "88Bifk8hB8BB8BBBB888chl8BhBfd"
"8aaaaa dddd r     " -> "8aaaaaddddr
*/
#include <iostream>
#include <string>
using namespace std ;

void removfunc (string word)
{
    string afterdelete = "" ;
    for ( int i = 0 ; i < word.size() ; i++)
    {
        if (word[i] == ' ')
        continue ;
        afterdelete += word[i] ;
    }
    
    cout << afterdelete ;
}


int main ()
{
    removfunc("8 j 8   mBliB8g  imjB8B8  jl  B");
    return 0 ;
}