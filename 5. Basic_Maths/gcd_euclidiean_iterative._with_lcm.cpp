// abs() fxn is added because gcd & lcm of any 2 negative nos or that of one +ve and one -ve no are ALWAYS POSITIVE.

#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    
    cout<<"Enter first no\n";
    cin>>a;
    cout<<"Enter second no\n";
    cin>>b;
    
    c = a = abs(a); d = b = abs(b); // READ UP

    while(a > 0)
    {
        int temp = a;
        a = b % a;
        b = temp;
    }

    int lcm = (c*d)/b; // Good formula to directly find out lcm provided gcd has already been found

    cout<<"GCD is "<<b<<endl;
    
    cout<<"LCM is "<<lcm;

}