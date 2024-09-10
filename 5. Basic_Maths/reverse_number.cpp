#include<iostream>
using namespace std;

int main()
{   
    int no, rem; int rev = 0; int i = 0;
    cout << "Enter the number to be reversed \n";
    cin >> no;

    while (no > 0)
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }
    cout << "Reversed number is : " << rev;
}