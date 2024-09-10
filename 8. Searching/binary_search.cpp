// This is regular binary search. Therfore only works if there are no duplicate elements

#include<iostream>
#include<algorithm>
using namespace std;

int binary_search(int search, int arr[], int size)
{
    int start = 0;
    int end = size - 1;

   while(start <= end) // has to be <= not just < so as to include all possibile iterations including equality
    {
        int mid = start + (end - start)/2; // mid calc is present within loop because mid needs to be constantly updated based on location of search element.

        if(search == arr[mid])
            return mid;
        
        else if(search < arr[mid])
            end = mid - 1;
        
        else
            start = mid + 1;
    }

    return -1; // if element is not present in list of elements
}

int main()
{   
    int search;
    cout<<"Enter the element to be searched\n";
    cin>>search;

    int no;
    cout<<"Enter the maximum number of elements\n";
    cin>>no;

    int arr[no];

    for(int i = 0; i < no; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr + no);

    cout<<"Sorted list of elements is :\n";

    for(int i = 0; i < no; i++)
    {
        cout<<arr[i]<<" ";
    }

    int result = binary_search(search, arr, no);

    if(result == -1)
        cout<<"\nElement not present in list of elements";

    else
        cout<<"\nSearch element is present in index "<<result;
}



/* 

Note : If size of array is not known beforehand. Then you can find out array size by line :

size = sizeof(arr)/size(arr[0]);

Not related to above problem. Just knowledge for future use.

*/



