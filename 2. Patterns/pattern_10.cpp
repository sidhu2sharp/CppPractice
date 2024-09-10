#include <iostream>
using namespace std;


void pattern8(int n) {
    // Write C++ code here
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j > i; j--)
        {
            cout<<"  ";
        }
        for(int k = 1; k < (2*i); k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern9(int n) 
{
    for(int i = 1; i <= n; i++)
    {
        for(int k = 1; k < i; k++)
        {
            cout<<"  ";
        }
        for(int j = 2*n-2*i+1; j >= 1; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    pattern8(n);
    pattern9(n);
}
