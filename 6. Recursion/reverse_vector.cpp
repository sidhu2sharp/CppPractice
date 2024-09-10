/*Segmentation fault occurs when non existent memory (out of bounds memory) is trying to be accessed. So "start >= end" makes sure that doesn't happen 
accidentally via memory corruption or other reasons

Without that extra ">", your code shows segmentation fault for input 2,3,4,5,-1*/


#include<iostream>
#include<vector>
using namespace std;

void reverse(vector <int> &v, int start, int end) // MUST use reference operator, else operation will be done on COPY of vector and NOT ORIGINAL. 
//                                                   MANDATORY PRECAUTION when dealing with vectors.
{
    if(start >= end) // In theory, start should never be greater than end, so "start == end" condition should be fine. 
        return;      // But that is a precautionary line, without which segmentation faults may occur. Make sure to write that extra ">" ALWAYS! Read up.

    int temp = v[start];
    v[start] = v[end];
    v[end] = temp;

    reverse(v, start+1, end-1);
}

int main()
{
    vector <int> vec;
    
    cout<<"To stop entering vector values, enter -1\n\n";
    
    while(true) // This is a while condition for loop to run indefinitely until it comes across break stmnt
    {
        int value;
        cout<<"Enter vector value\n";
        cin>>value;
        
        if(value == -1)
            break;
        
        vec.push_back(value);
    }

    int len = vec.size();
    
    reverse(vec, 0, len-1);

    cout<<"The reversed vector is\n";
    
    for(int i = 0; i < len; i++)
    {
        cout<<vec[i]<<endl;
    }
}