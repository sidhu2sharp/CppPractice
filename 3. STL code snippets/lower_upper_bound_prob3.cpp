/* Find the largest number smaller than x in sorted array. If no such number exists, return -1*/

#include <iostream>
#include <vector> // for vectors 


using namespace std;

int main()
{
    vector <int> v = {1,4,4,4,4,9,9,10,11};

    int x;
    cout<<"Enter element\n";
    cin>>x;

    vector <int> :: iterator it = lower_bound(v.begin(), v.end(), x); // vector <int> iterator can be substituted with auto

    int ind = it - v.begin();

    ind--;

    if(ind != -1 && v[ind+1] == x)
    {
        cout<<v[ind];
    }
    else{
        cout<<"-1";
    }
}