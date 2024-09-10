// Online C++ compiler to run C++ program online
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

int main()
{
    int no;
    cout<<"Enter the value of no\n";
    cin>>no;
    pattern8(no);
}