#include <vector>
#include <iostream>
using namespace std ;

int min(vector<int> list){
    int min = list[0];
    for(int i = 1 ; i < list.size() ; i++)
    {
        if(list[i] < min )
        {
            min = list[i] ;
        }
    }
    return min;
}

int max(vector<int> list)
{
    int max = list[0];
    for(int i = 1 ; i < list.size() ; i++)
    {
        if(list[i] > max )
        {
            max = list[i] ;
        }
    }
    return max;
}

int main()
{
    vector<int> values ;
    int n , value ;
    cout << "Enter the number of values you need to be listed " ;
    cin >> n ;
    cout << "Enter the values you need to be listed : " ;
    for ( int i = 0 ; i <= n ; i++ )
    {
        cin >> value ;
        values.push_back(value);
    }
    int minvalue = min(values) ;
    cout << "The minimum value from the vector is : " << minvalue << "\n";
    int maxvalue = max(values);
    cout<< "The maximin value from the vector is : " << maxvalue << "\n" ;
    return 0;
}
