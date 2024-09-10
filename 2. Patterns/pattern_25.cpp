#include<iostream>
using namespace std;

void pattern25(int n)
{
    for (int i = 0; i < 2*n-1; i++)
    {
        for(int j = 0; j < 2*n-1; j++)
        {
            cout<<(n - min(min(i,j),min(2*n-2-i, 2*n-2-j)));
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
    pattern25(no);
}