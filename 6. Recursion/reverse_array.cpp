#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    if( start >= end) // see why that extra ">" sign is required in corresponding vector program comments.
        return;
    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    reverse(arr, start+1, end-1);
}

int main()
{
    int n; // size of the array
    cout<<"Enter the size of the array\n";
    cin>>n;
    
    int a[n];
    
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter array value #"<<i+1<<endl;
        cin>>a[i];
    }
    
    reverse(a, 0, n-1);
    
    cout<<"Reversed array is :\n";
    
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}