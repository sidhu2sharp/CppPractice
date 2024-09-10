/*NOTE : When declaring a hash array holding INTEGER VALUES, WITHIN MAIN FXN, it can have a maximum size of 10^6.
         However if it is declared as a global variable, it can have a maximum size of 10^7.

         When declaring a hash array holding BOOLEAN VALUES, WITHIN MAIN FXN, it can have a maximum size of 10^7.
         However if it is declared as a global variable, it can have a maximum size of 10^8.

         Also when a integer hash array is declared as global variable, you need not initialise it with zero values (to {0}) 
         as it will hold zero values by default as opposed to garbage values when DECLARED GLOBALLY.

         'hash' holds predefined meaning to C++ compiler, as it is the name of a C++ standard template library.
         So, if declaring globally, make sure to use a different variable name.
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no of elements in array\n";
    cin>>n;

    int arr[n];
    int hash[101] = {0}; // Generally the question will state maximum size. Here I'm assuming max size is 100. Therefore 101 nos (from 0-100).


    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        hash[arr[i]] += 1;
    }

    cout<<"Frequency of each element in array is :"<<endl;

    int j = 0;

    while(j < n) //can be written using for loop as well
    {
        cout<<hash[arr[j]]<<endl;
        j++;
    }
}