// Using void main (This is ideal)

#include<iostream>
using namespace std;

void rec(int n)
{
    if(n == 0)
        return;
    
    cout<<n<<endl;
    rec(n-1);
}

int main()
{
    int no;
    cout<<"Enter the value of no\n";
    cin>>no;
    
    rec(no);
}


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/* Code using int main 

#include<iostream>
using namespace std;

int rec(int n)
{
    if(n == 1)
    {
        cout<<n<<endl;
        return n;
    }

    cout<<n<<endl;
    rec(n-1);
}

int main()
{
    int no;
    cout<<"Enter the value of no\n";
    cin>>no;
    
    rec(no);
}
*/