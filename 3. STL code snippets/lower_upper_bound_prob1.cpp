/* 

QUESTION :

Find the first occurence of an element in a **SORTED** array. If it does not exist, print -1
Output if element exists should be index of its first occurence" 

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

V V important note :

lower bound function :

returns iterator pointing to first element **IN RANGE**  which has value NOT LESS THAN x and if x is not present in vector RANGE, it returns end iterator (wall)

This means that any value that exists in vector **RANGE**, will have its index outputted in below program if conditation stmnt condition is :

x >= v.begin() && x <= v.end()

eg : if x is 5, its index will be 5 i.e first occurence of 9's index because index of first element in range which has value not less than x will be outputted.

not less than ----> equal to greater than

equal to is not possible since 5 is not among the elements present in vector

therefore ---> greater than i.e 9's index.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

*/


#include <iostream>
#include <vector> // for vectors 


using namespace std;

int main()
{
    vector <int> v = {1,4,4,4,4,9,9,10,11};

    int x;
    cout<<"Enter element whose index you want\n";
    cin>>x;

    vector <int> :: iterator it = lower_bound(v.begin(), v.end(), x); // vector <int> iterator can be substituted with auto.

    int ind = it - v.begin(); // v.begin() is an iterator that points to first element of vector.
    
    int len = v.end() - v.begin(); // v.end() is an iterator that points just past the last element of vector. Used to mark the end of the vector.

    if(v[ind] == x)
    {
        cout<<ind;
    }
    else{
        cout<<"-1";
    }
}


                                         
                                   
    
    

    
