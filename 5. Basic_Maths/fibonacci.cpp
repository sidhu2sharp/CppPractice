#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter the value of n\n";
    cin>>n;
    
    if(n == 0)
        return 0;
    
    int a[n] = {};
    
    a[0] = 0;
    a[1] = 1;

    cout<<"First "<<n<<" numbers of Fibonacci series are :\n\n" ;

    if(n >= 1)
        cout<<a[0]<<" ";
        
    if(n >= 2)
        cout<<a[1]<<" ";
    
    if(n >= 3)
    {
        int i = 0;

        while(i+2 < n)
        {   
            a[i+2] = a[i+1] + a[i];
            cout<<a[i+2]<<" ";
            i++;
        }
    }
}