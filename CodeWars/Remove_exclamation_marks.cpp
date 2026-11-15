#include <string>
#include <iostream>
using namespace std ;

string exclamation_remove (const string& str)
{
    string Removed = "" ;
    for (int i = 0 ; i < str.length() ; i++ )
    {
        if(str[i] == '!')
        {
            continue;
        }
        Removed += str[i];
    }

    return Removed ;
}
int main()
{
    string str ;
    cout << "Enter the string you need to remove exclamation mark from  : " ;
    getline(cin,str);
    string result = exclamation_remove(str) ;
    cout << result ;
    return 0;
}