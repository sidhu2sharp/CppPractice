// This code gives boolean value based on whether or not element exists in vector


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    vector <int> v = {1,2,3,4,5};
    
    sort(v.begin(), v.end());
    
    int res = binary_search(v.begin(), v.end(), 7);
    
    cout<<boolalpha<<res; //if you want "true" and "false";
    
    //cout<<res // -----> if you want 1 and 0
    
    return 0;
}

