#include<iostream>
using namespace std;


int main()
{
    int n; int m; int count = 0;
    cout<<"Enter the number\n";
    cin>>n;

    cout<<"The digits in this number are : \n";
    while(n > 0)
    {
        m = n % 10; // This line is only for extraction of digits. It is not necessary to count digits.
        count += 1;
        n = n / 10;
        cout<<m<<"\n";
    }
    cout<<"Number of digits in entered number are : "<<count;

}