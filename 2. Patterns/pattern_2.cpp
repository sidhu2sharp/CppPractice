#include<iostream>
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

int main()
{
    int no;
    cout <<"Enter the value of no\n";
    cin>>no;
    pattern2(no);

}