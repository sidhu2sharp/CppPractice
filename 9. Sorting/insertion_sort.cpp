#include<iostream>
using namespace std;

int insertion_sort(int n, int arr[])
{
    for(int i = 0; i < n; i++)
    {
        int j = i;
        while(j > 0)
        {
            if(arr[j - 1] > arr[j]) // arr[j-1] is valid because while condition is j > 0
            {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
            j--;
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

    insertion_sort(no, a);

    for(int i = 0; i < no; i++)
    {
        cout<<a[i]<<" ";
    }
}