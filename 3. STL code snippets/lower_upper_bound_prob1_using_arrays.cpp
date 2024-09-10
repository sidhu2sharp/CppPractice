// Same as prob1 except  using arrays

#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,4,4,4,4,9,9,10,11};

    int x;
    cout<<"Enter element whose index you want\n";
    cin>>x;

    int n = sizeof(a)/sizeof(a[0]);

    int *p = lower_bound(a, a+n, x); 

    int ind = p - a;
    
    

    if(a[ind] == x)
    {
        cout<<ind;
    }
    else{
        cout<<"-1";
    }
}




    
    

    
