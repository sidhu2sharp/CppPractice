/* 

int mid = (start + (end - start))/2; ----> Here it is (end - start) as opposed to just end because of potential overflow error. 
integer max value is 2^32 -1. suppose end value is that, then 0 + 2^32 -1 will display error, even though zero have no value. 
thus (end - start) to avoid this. 

Also this code uses vectors, no arrays

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find_first_occurence(int search_ele, vector <int> &arr) // pefroms regular binary search. Binary search only gives you first occurence of element in array
{
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end) // has to be <= not just < so as to include all possibile iterations including equality
    {
        int mid = start + (end - start)/2; // mid calc is present within loop because mid needs to be constantly updated based on location of search element.

        if(search_ele == arr[mid])
            return mid;
        
        else if(search_ele < arr[mid])
            end = mid - 1;
        
        else
            start = mid + 1;
    }

    return -1; // if element is not present in list of elements
}

vector <int> find_all_occurences(int search_ele, vector <int> &arr) // function is of vector return type because it must return a VECTOR of indices where search element is present
{
    int first_index = find_first_occurence(search_ele, arr);

    vector <int> indices;

    if(first_index != -1)
    {
        for(int i = first_index; i < arr.size(); i++)
        {
            if(search_ele == arr[i])
            {
                indices.push_back(i);
            }
        }
    }
    return indices; // all indices where search element is present
}

int main()
{   
    int search;
    cout<<"Enter the element to be searched\n";
    cin>>search;

    vector <int> v;

    cout<<"Enter the list of elements\nEnter -1 to exit\n";

    while(true)
    {
        int ele;
        cin>>ele;

        if(ele == -1)
            break;

        v.push_back(ele);
    }

    sort(v.begin(), v.end());

    cout<<"Sorted list of elements is :\n";

    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    vector <int> result_indices = find_all_occurences(search, v);


    if(result_indices.empty())
        cout<<"\nElement not present in list of elements";
    
    else
    {
        cout<<"\nSearch element is present in index/indices :"<<endl;

        for(int i = 0; i < result_indices.size(); i++)
        {
            cout<<result_indices[i]<<" ";
        }
    }
}