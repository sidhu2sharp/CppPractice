#include <iostream>
using namespace std;

void pattern12(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i%2 != 0 && j%2 != 0)
                cout << "1 ";
            else if(i%2 != 0 && j%2 == 0)
                cout << "0 ";
            else if(i%2 == 0 && j%2 != 0)
                cout << "0 ";
            else
                cout << "1 ";
        }
        cout << endl;
    }
}

int main()
{
    int no;
    cout << "Enter the value of no\n";
    cin >> no;
    pattern12(no);
}