// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

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
    int no;
    cout<<"Enter the value of no\n";
    cin>>no;
    pattern9(no);
}