/* 
Create a function that accepts a string and a single character, 
and returns an integer of the count 
of occurrences the 2nd argument is found in the first one.

If no occurrences can be found, a count of 0 should be returned.

("Hello", 'o')  =>  1
("Hello", 'l')  =>  2
("", 'z')       =>  0
Notes
The first argument can be an empty string
In languages with no distinct character data type, 
the second argument will be a string of length 1
*/
#include <iostream>
#include <string>
using namespace std ;

int main ()
{
    string word ;
    char letter ;
    cout << "Enter the word you need : " ;
    cin >> word ;
    cout << "Enter the letter you need to check " ;
    cin >> letter ;
    int letterexist = 0 ;
    for (int i = 0 ; i < word.size() ; i++)
    {
        if (word[i] == letter)
        letterexist += 1 ;
    }
    cout << "The letter exist " << letterexist << " times" ;
    return 0 ;
}