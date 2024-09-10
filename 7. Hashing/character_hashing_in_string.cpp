//Program finds frequency of characters in strings, using hash array

// This works only for lowercase letters. Uppercase letters start from 65 in ASCII.
// You can enter max size to be 256 if you want to find the frequency of every character in ASCII. This way, you dont have to subtract any number.

#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string value\n";
    cin>>s;

    int hash[26] = {0}; 

    for(int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 97] += 1; // No need to typecast s[i] to int
    }

    for(int i = 0; i < s.size(); i++)
    {
        cout<<hash[s[i] - 97]<<" "; // No need to typecast s[i] to int
    }
}
