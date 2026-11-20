/*
Description:
Is the string uppercase?
Task
Create a method to see whether the string is ALL CAPS.

Examples (input -> output)
"c" -> False
"C" -> True
"hello I AM DONALD" -> False
"HELLO I AM DONALD" -> True
"ACSKLDFJSgSKLDFJSKLDFJ" -> False
"ACSKLDFJSGSKLDFJSKLDFJ" -> True
*/

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std ;

int main ()
{
    string word ;
    cout << "Enter the word only one : " ;
    getline(cin , word);
    string wordfull = "" ;
    for(int i = 0 ; i < word.size() ; i++)
    {
        if(isalpha(word[i]))
        {
            wordfull += word[i] ;
        }
        else
        {
            continue;
        }
    }
    all_of(word.begin() , word.end() , ::isupper);
    cout << all_of(wordfull.begin() , wordfull.end() , ::isupper);
    return 0 ;
}

