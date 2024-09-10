#include <iostream>
using namespace std;

void pattern19(int n)
{
    for(int i = 1; i <= n; i++)
    {
        char a = 'A' + i - 1;
        for(int j = 1; j <= n-i+1; j++)
        {
            cout<<" ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout<<a;
        }
        for(int l = 1; l < i; l++)
        {
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