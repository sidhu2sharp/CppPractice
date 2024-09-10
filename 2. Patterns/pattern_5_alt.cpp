# include <iostream>
using namespace std;

int pattern5alt(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i+1; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main()
{
    int no;
    cout<<"Enter the value of no\n";
    cin>>no;
    pattern5alt(no);
}