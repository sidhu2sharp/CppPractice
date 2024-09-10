// FULL CODE IS IN MAIN FXN HERE


#include <iostream>
using namespace std;

int main() 
{
    // Write C++ code here
   int n = 5;
   int i = 1;
   while(i <= n)
   {
       int j = 1;
       while(j <= i)
       {
            cout<<"*";
            j++;
       }
       cout<<endl;
       i++;
   }
}