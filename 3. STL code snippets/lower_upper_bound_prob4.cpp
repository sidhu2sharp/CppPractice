/* Find the smallest number larger than x in sorted array. If no such number exists, return -1*/


#include <iostream>
#include <vector> // for vectors 
#include <algorithm>


using namespace std;

int main()
{
    vector <int> v = {1,4,4,4,4,9,9,10,11};

    int x;
    cout<<"Enter element\n";
    cin>>x;

    vector <int> :: iterator it = upper_bound(v.begin(), v.end(), x); 

    int ind = it - v.begin();

    int len = v.end() - v.begin();

    if(ind != len && v[ind-1] == x)
    {
        cout<<v[ind];
    }
    else{
        cout<<"-1";
    }
}