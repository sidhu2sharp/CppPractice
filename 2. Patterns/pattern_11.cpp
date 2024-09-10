#include <iostream>
using namespace std;

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout << "\n";
    }
}

void pattern5(int n)
{
    for (int i = n-1; i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
            cout<<"*";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    pattern2(n);
    pattern5(n);
}
