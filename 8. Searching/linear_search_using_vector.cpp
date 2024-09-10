#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int search;
    cout<<"Enter the element to be searched\n";
    cin>>search;

    vector <int> v;

    cout<<"Enter list elements to be searched\nEnter -1 if no more elements\n";

    while(true)
    {
        int ele;
        cin>>ele;

        if(ele == -1)
            break;
        
        v.push_back(ele);
    }

    for(int i = 0; i < v.size(); i++)
    {
        if(search == v[i])
            cout<<"Search element exists in index "<<i<<" of given vector of elements\n";
    }
}
