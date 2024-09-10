#include<iostream>
using namespace std;

int pattern5(int n)
{
    for (int i = n; i >= 1; i--)
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
    int no;
    cout <<"Enter the value of no\n";
    cin>>no;
    pattern5(no);

}