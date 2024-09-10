#include <iostream>
using namespace std;

void pattern19(int n)
{
    for(int i = 1; i <= n; i++)
    {
        
        for(int j = 1; j <= n-i+1; j++)
        {
            cout<<" ";
        }
        for(int k = 1; k <= i; k++)
        {
            char a = 'A' + k - 1;
            cout<<a;
        }
        for(int l = i; l > 1; l--)
        {
            char a = 'A' + l - 2;
            cout<<a;
        }
        cout<<endl;
    }
}

int main()
{
    int no;
    cout<<"Enter the value of no\n";
    cin>>no;
    pattern19(no);
}