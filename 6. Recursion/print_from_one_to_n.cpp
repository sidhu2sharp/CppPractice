// Using void main (This is ideal)

#include<iostream>
using namespace std;

void rec(int n)
{
    if(n == 1)
    {
        cout<<n<<endl; //prints 1
        return;
    }
    
    rec(n-1);
    cout<<n<<endl; // prints 2 3 4 5 (assuming n = 5)
}

int main()
{
    int no;
    cout << "Enter the number\n";
    cin >> no;
    
    rec(no);
}


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/* Using int main (This is NOT ideal)

#include<iostream>
using namespace std;

int rec(int n)
{
    if(n == 1)
    {
        cout<<n<<endl; // outputs 1
        return n;
    }
    
    rec(n-1);
    cout<<n<<endl; // outputs 2 3 4 5 (assuming n = 5)
}

int main()
{
    int no;
    cout << "Enter the number\n";
    cin >> no;
    
    rec(no);
}

*/