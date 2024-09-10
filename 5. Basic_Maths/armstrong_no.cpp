#include <iostream>
#include<string>
#include <cmath>

using namespace std;

int main()
{
    int n = 9474; int cpy = n;

    string no = to_string(n);

    int len = no.length();

    int sum = 0;


    while(n != 0)
    {
        int rem = n%10;

        sum += pow(rem, len);

        n = n/10;

    }

    if(sum == cpy)
        cout<<"Armstrong";
    else
        cout<<"NOT";
}