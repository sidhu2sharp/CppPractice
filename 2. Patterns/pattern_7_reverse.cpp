// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void pattern7rev(int n) {
    // Write C++ code here
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<" ";
        }
        for(int k = 1; k <= n-i+1; k++)
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
    pattern7rev(no);
}