#include<iostream>
using namespace std;

int rec(int n)
{
    if(n == 1)
        return 1;

    return n + rec(n-1);
}

int main()
{
    int no;
    cout<<"Enter the value of n\n";
    cin>>no;

    cout<<"Sum of first n natural numbers is "<<rec(no);
}