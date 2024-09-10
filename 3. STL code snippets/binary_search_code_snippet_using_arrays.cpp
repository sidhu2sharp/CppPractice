// This code gives boolean value based on whether or not element exists in array 

//#include<bits/stdc++.h>   -----> for competitive coding. For the time being, learn all header files
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int a [] = {1,2,4,3,5};
    
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+n);
    
    bool res = binary_search(a, a+n, 6);
    
    cout<<boolalpha<<res;
}