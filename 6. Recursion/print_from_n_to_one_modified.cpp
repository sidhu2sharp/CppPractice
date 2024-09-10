#include<iostream>
using namespace std;

void rec(int start, int end)
{
    if(start == end)
    {
        cout<<start<<endl;
        return;
    }
    
    rec(start+1, end); // Only diff b/w this and one to n is interchanging og recursive call and output stmnt
    cout<<start<<endl; //In this case until recursive loop is completed, unwinding of stack is not done.
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