#include<iostream>
using namespace std;

void pattern21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char a = 'A' + n - 1;
        char b = a - i + 1;
        
        for(int j = 1; j <= i; j++)
        {
            cout<<b;
            cout<<" ";
            b++;
        }
        cout << "\n";
    }
}

int main()
{
    int no;
    cout <<"Enter the value of no\n";
    cin>>no;
    pattern21(no);

}