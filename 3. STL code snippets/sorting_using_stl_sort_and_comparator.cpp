#include <iostream>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) // refer notebook for more info on comparator
{
    if(p1.second < p2.second) return true;
    else if(p1.second > p2.second) return false;

    return p1.first > p2.first;
}

/* More concise way of coding comparator function

bool comp(pair<int, int> p1, pair<int, int> p2) 
{
    return (p1.second < p2.second) || (p1.second == p2.second && p1.first > p2.first);
}

*/

int main() 
{
    // Write C++ code here
    pair <int, int> a[] = {{1,2}, {1,1}, {1,1}, {2,1},{4,1}, {5,4}};
    
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+n, comp);
    
    for (int i = 0; i < n; i++) {
        cout << "{" << a[i].first << ", " << a[i].second << "} ";
    }
    

    return 0;
}