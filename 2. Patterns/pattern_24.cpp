#include<iostream>
using namespace std;

void pattern24(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == 1 || i == n)
            {
                cout<<"* ";
            }
            else
            {
                if(j == 1 || j == n)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<"\n\n";
    }
}

int main()
{
    int no;
    cout<<"Enter the value of n\n";
    cin>>no;
    pattern24(no);
}