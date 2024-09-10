#include<iostream>
using namespace std;

void rec(int start, int end)
{
    if(start == end)
    {
        cout<<start<<endl;
        return;
    }
    
    cout<<start<<endl;
    rec(start+1, end);
}

int main()
{
    int st, ed;
    
    cout<<"Enter the start point\n";
    cin>>st;
    
    cout<<"Enter the end point\n";
    cin>>ed;
    
    rec(st, ed);
}