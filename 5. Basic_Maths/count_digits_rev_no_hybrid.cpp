//order of printing of digits is one after the other here i.e 123's digits will be printed as 1,2,3
//in count_digits program, it prints as 3,2,1

#include<iostream>

using namespace std;

int reverse(int no)
{   
    int rem; int rev = 0; int i = 0;

    while (no > 0)
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }
    return rev;
}

int main()
{
    int n; int m; int count = 0; int no;
    cout<<"Enter the number\n";
    cin>>n;

    cout<<"The digits in this number are : \n";

    no = reverse(n);

    while(no > 0)
    {
        m = no % 10; // This line is only for extraction of digits. It is not necessary to count digits.
        count += 1;
        no = no / 10;
        cout << m << "\n";
    }
    cout<<"Number of digits in entered number are : "<<count;
}