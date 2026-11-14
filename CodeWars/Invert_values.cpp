/*
Description
Given a set of numbers, return the additive inverse of each. 
Each positive becomes negatives, and the negatives become positives.
*/
#include <vector>
#include <iostream>
using namespace std ;


#include <iostream>
#include <vector>
using namespace std;

vector<int> invert(vector<int> values)
{
    for (int i = 0; i < values.size(); i++)
    {
        values[i] *= -1;
    }

    return values;
}

int main()
{
    vector<int> numbers = {1, 2, -3, 4, -5};

    vector<int> result = invert(numbers);

    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}

    