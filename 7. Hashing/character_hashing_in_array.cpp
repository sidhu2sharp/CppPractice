//Program finds frequency of characters in array, using hash array

// This works only for lowercase letters. Uppercase letters start from 65 in ASCII.
// You can enter max size to be 256 if you want to find the frequency of every character in ASCII. This way, you dont have to subtract any number.


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no of characters\n";
    cin>>n;

    char arr[n]; 
    int hash[26] = {0};

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        hash[arr[i] - 97] += 1; // No need to typecast arr[i] to int
    }

    for(int i = 0; i < n; i++)
    {
        cout<<hash[arr[i]-97]<<" "; // No need to typecast arr[i] to int
    }
}
