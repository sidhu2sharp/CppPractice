#include<iostream>
using namespace std;

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout << "\n";
    }
}

int main()
{
    int no;
    cout <<"Enter the value of no\n";
    cin>>no;
    pattern3(no);

}