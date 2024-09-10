#include<iostream>
using namespace std;

void pattern14(int n)
{
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<a;
            cout<<" ";
            a++;
        }
        cout << "\n";
    }
}

int main()
{
    int no;
    cout <<"Enter the value of no\n";
    cin>>no;
    pattern14(no);

}