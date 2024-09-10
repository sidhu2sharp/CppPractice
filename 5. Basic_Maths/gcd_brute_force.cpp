// abs() fxn is added because gcd & lcm of any 2 negative nos or that of one +ve and one -ve no are ALWAYS POSITIVE.

#include<iostream>
using namespace std;

int main()
{
    int c, d;
    int gcd = 1;
    
    cout<<"Enter first no\n";
    cin>>c;
    cout<<"Enter second no\n";
    cin>>d;

    c = abs(c); d = abs(d); // READ UP
    
    if (c == 0 || d == 0)
    {
        cout<<"GCD is "<<max(c,d);
        exit(0);
    }
            
    else if (c % min(c, d) == 0 && d % min(c, d) == 0)
    {
        cout<<"GCD is "<<min(c,d);
        exit(0);
    }
    
    for(int i = 2; i <= min(c,d)/2; i++)
    {
        if(c%i == 0 && d%i == 0)
            gcd = i;
    }
    
    cout<<"GCD is "<<gcd;
}

