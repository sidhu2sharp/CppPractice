#include<iostream>
using namespace std;

void rec(string &s, int start, int end)
{
    if(start >= end)
        return;
    
    int temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    
    rec(s, start+1, end-1);
}

int main()
{
    string str;
    cout<<"Enter the string\n";
    cin>>str;
    
    int len = str.length();
    
    rec(str, 0, len-1);
    
    cout<<str;
}


/*    Without recursion 

#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter string\n";
    cin>>s;
    
    int len = s.length();
    
    for(int i = 0; i < len/2; i++)
    {
        char temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
    
    cout<<s;
}

*/