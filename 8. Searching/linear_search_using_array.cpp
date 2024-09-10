#include<iostream>
using namespace std;

int main()
{
    int search;
    cout<<"Enter the element to be searched\n";
    cin>>search;

    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;

    int arr[n];

    cout<<"Enter the array elements\n";

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(search == arr[i])
            cout<<"Search element exists in index "<<i<<endl;
    }
}