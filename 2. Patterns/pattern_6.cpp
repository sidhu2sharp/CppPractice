#include <iostream>
using namespace std;

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i+1; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}


int main()
{
    int no;
    cout<<"Enter the value of no\n";
    cin>>no;
    pattern6(no);

}