#include<iostream>
using namespace std;

void pattern13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout<<i+j;
            cout<<" ";
        }
        cout << "\n";
    }
}

int main()
{
    int no;
    cout <<"Enter the value of no\n";
    cin>>no;
    pattern13(no);

}