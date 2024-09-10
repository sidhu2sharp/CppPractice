/* 

QUESTION : 

Find the last occurence of an element in a **SORTED** array. If it does not exist, print -1
Output if element exists should be index of its last occurence" 

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Upper bound function:

Returns iterator pointing to first element **IN RANGE** which has value greater than x nd if x is not present in vector RANGE, it returns end iterator (wall)

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> v = {1,4,4,4,4,9,9,10,11};

    int x;
    cout<<"Enter element whose index you want\n";
    cin>>x;

    vector <int> :: iterator it = upper_bound(v.begin(), v.end(), x);

    int ind = it - v.begin();

    ind--;

    if(v[ind] == x)
    {
        cout<<ind;
    }
    else
    {
        cout<<-1;
    }

}