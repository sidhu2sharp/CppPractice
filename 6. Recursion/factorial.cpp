#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 1)
        return 1; 

    return n * fact(n-1); 

//In fact fxn, there are no cout stmnts b'coz, we only need the final output. NOT o/p for every iteration.
//Therefore, only return stmnts in fact fxn and final o/p stmnt in main fxn.
}

int main()
{
    int no;
    cout<<"Enter the value of no\n";
    cin>>no;
   
    cout<<"Factorial of "<<no<<" is "<<fact(no);
}