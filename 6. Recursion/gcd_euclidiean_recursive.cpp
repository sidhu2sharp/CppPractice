// abs() fxn is added because gcd & lcm of any 2 negative nos or that of one +ve and one -ve no are ALWAYS POSITIVE.

#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    
    return gcd(b%a, a);
}

int main()
{
    int c, d;
    
    cout<<"Enter first no\n";
    cin>>c;
    cout<<"Enter second no\n";
    cin>>d;
    
    cout<<"GCD is "<<gcd(abs(c), abs(d)); // abs() fxn. READ UP.
}