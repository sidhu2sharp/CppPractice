#include <iostream>
using namespace std;

int pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        for(int k = 1; k <= n-i; k++)
        {
            cout<<"  ";
        }
        for(int l = 0; l < i; l++)
        {
            cout<<i-l;
        }
        cout << "\n";
    }
}

int main()
{
    int no;
    cout << "Enter the value of no\n";
    cin >> no;
    pattern15(no);
}

