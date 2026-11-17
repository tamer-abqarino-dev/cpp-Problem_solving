/*
Given a non-empty array of integers, return the result of 
multiplying the values together in order. Example:
[1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24
*/

#include <iostream>
#include <vector>
using namespace std ;

int main()
{
    int numvalues ;
    cout << "Enter the number of values you will enter : " ;
    cin >> numvalues ;
    vector<int> nums;
    nums.resize(numvalues) ;
    cout << "enter the values you need : \n" ;
    for(int i = 0 ; i < nums.size() ; i++ )
    {
        cin >> nums[i] ;
    }
    int multiplication = 1 ;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        multiplication *= nums[i] ;
    }
    cout << "The multiplication is : " << multiplication << " \n" ;
    return 0;
}