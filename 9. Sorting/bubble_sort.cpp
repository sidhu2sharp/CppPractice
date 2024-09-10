#include<iostream>
using namespace std;

int bubble_sort(int n, int arr[])
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[i]) // change < to > for descending order sorting
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int no;
    cout<<"Enter the number of elements\n";
    cin>>no;

    int a[no];

    cout<<"Enter the elements to be sorted\n";

    for(int i = 0; i < no; i++)
    {
        cin>>a[i];
    }

    bubble_sort(no, a);

    for(int i = 0; i < no; i++)
    {
        cout<<a[i]<<" ";
    }
}