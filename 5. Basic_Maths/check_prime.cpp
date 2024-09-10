#include<iostream>
using namespace std;

int checkprime(int n)
{   
    int count = 0;

    if(n <= 1) // 1, 0 and negative nos are neither prime nor composite
        cout<<"Not applicable";

    else if(n % 2 == 0) // can avoid running of loop, by simply checking if even or odd. If even, then has to be composite.
        cout<<"Composite";

    else
    {
        for(int i = 2; i <= n/2; i++) // every no has factors - 1 & no itself. Also every number's biggest factor is half the no. By skipping these, we have lesser iterations. 
        {
            if(n%i == 0) // Because 1 & no itself are both avoided in loop. If no has even a single factor, that means it has a total of 3 factors. Thus composite.
                count += 1;
        }

        if(count > 0)
            cout<<"Composite";

        else
            cout<<"Prime";
    }
}

int main()
{
    int no;
    cout<<"Enter the value"<<endl;
    cin>>no;
    checkprime(no);
}

