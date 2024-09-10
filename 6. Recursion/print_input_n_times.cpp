#include<iostream>
using namespace std;

void rec(const string &str, int no) // const to make sure string is not modified unintentionally. Is a good practice.
//                                     using memory location via & ('address of' operator) to save time and space complexity as string can be large.
{
    if(no == 0)
        return;
    
    cout<<str<<endl;
    rec(str, no-1);
}

int main()
{
    string s; int n;

    cout<<"Enter the value of n\n";
    cin>>n;

    cin.ignore(); // cin leaves a newline character (\n) into the buffer after taking input. Hence, this line.
                  // This line is necessary anytime a cin statement precedes a getline statement.

    cout<<"Enter the value to be printed n times\n";
    getline(cin, s); // If cin.ignore() is absent, getline stmnt will assume \n is the string to be printed
                                                                                                   
    rec(s, n);

    //The cin.ignore() line can also be avoided by simply interchanging the order of n & s's o/p and i/p stmnts
}
