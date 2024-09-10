#include<iostream>
using namespace std;

int min_array_element(int n, int arr[])
{
    int min = arr[0];

    int i = 0;

    while(i != n)
    {
        if(arr[i] < min)
            min = arr[i];
        
        i++;
    }

    return min;
}

int main()
{
    int n;
    cout<<"Enter the total number of elements\n";
    cin>>n;

    cout<<"Enter the array of elements\n";

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<min_array_element(n, arr);
}