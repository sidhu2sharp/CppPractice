#include <iostream>
using namespace std;

int main()
{
    int n = 5; 
    for (int i = 0; i < n; i++)
    {
        char a = 'A' + i;
        for(int j = 0; j <= i; j++)
        {
            cout<<a;
        }
        cout<<endl;
    }
}


/* ALTERNATE METHOD (SLIGHT MODIFICATION IN i, j & a VALUES)
int main()
{
    int n = 5; 
    for (int i = 1; i <= n; i++)
    {
        char a = 'A' + i - 1;
        for(int j = 1; j <= i; j++)
        {
            cout<<a;
        }
        cout<<endl;
    }
}
*/