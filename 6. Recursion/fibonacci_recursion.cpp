#include<iostream>
using namespace std;

int fib(int n)
{
    if(n == 0)
        return 0;
    
    else if(n == 1)
        return 1;
        
    else
        return fib(n-1) + fib(n-2);
}

int main()
{
    int no;
    cout << "Enter the number\n";
    cin >> no;
    
    cout<<"\n#"<<no<<" of the fibonacci series is "<<fib(no-1)<<endl<<endl;
    
    cout<<"First "<<no<<" numbers of the fibonacci series are :\n\n";
    
    for(int i = 0; i < no; i++)
        cout<<fib(i)<<" ";
}