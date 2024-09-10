#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    
    cout<<"Enter the elements\n";

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    map <int, int> mpp;

    for(int i = 0; i < n; i++)
    {
        mpp[arr[i]] += 1;
    }

    map <int, int> :: iterator it;

    vector <int> max_val;
    vector <int> min_val;
    int max_freq = 0; // Note that it's 0 here
    int min_freq = n; // and n here. See corresponding if conditions to understand why

    for(it = mpp.begin(); it != mpp.end(); it++)
    {
        if(it->second > max_freq)
        {
            max_freq = it->second;
            max_val.clear();
            max_val.push_back(it->first);
        }
        else if(it->second == max_freq)
        {
            max_val.push_back(it->first);
        }
        
        if(it->second < min_freq)
        {
            min_freq = it->second;
            min_val.clear();
            min_val.push_back(it->first);
        }
        else if(it->second == min_freq)
        {
            min_val.push_back(it->first);
        }
    }

    cout<<"Element(s) with maximum frequency of "<<max_freq<<" is/are :"<<endl;
    
    for(const int &ele : max_val)
    {
        cout<<ele<<" ";
    }

    cout<<"\nElement(s) with minimum frequency of "<<min_freq<<" is/are :"<<endl;
    
    for(const int &ele : min_val)
    {
        cout<<ele<<" ";
    }
}