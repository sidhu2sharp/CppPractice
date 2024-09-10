// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
   int n = 1;
   int i = 5;
   while(i >= n)
   {
       int j = 1;
       while(j <= i)
       {
            cout<<"*";
            j++;
       }
       cout<<endl;
       i--;
   }
    return 0;
}