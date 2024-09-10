/* Difference b/w hash arrays and maps via example :

Suppose you have to find the frequency of elements in an array. If you did this by iterating through the array and incrementing count variable every time there is a match in elements 
in if condition, then the time complexity of that will be --> N * O(N). N --> for no of elements whose frequency you need to find. O(N) for number of iterations.

Example : If you had to compare frequency of 5, 6, 8, 17 in {5, 17, 6, 6 , 17, 5, 8, 5, 8}. Time Complexity will be --> 4 * O(9).

Advantage of doing this process with a hash array is. When declaring a hash array, you will specify a maximum size, suppose 100. This array can now hold 101 elements (0-100). You will
also equate this array to 0, thus making all of its elements - 0. Now, as you iterate through every element in the array, you will simply increment the corresponding value of hash array.

Example : Taking same example as above, as you iterate through the array, hash[5] increments from 0 --> 1 --> 2 --> 3. Same happens to other array elements. Then when you want to find
frequency of any particular element (n), you can simply print hash(n) to get its frequency. Thus making the time complexity of has method simply --> O(N).

Advantage of using maps over hash arrays, is --> maps overcome the hash **ARRAY** 'S inherent need for a size in its declaration (The same advantage vectors hold over arrays) i.e 
hash arrays have static meory allocation i.e memory is fixed at compile time, while maps have dynamic memory allocation i.e memory can change at run time.

Example : Again, taking the above example, simply because one of the elements in the array is 17, you need to declare a hash array of size 17. This means that in the 18 total values 
(0 - 17) in the hash array, only 4 values (5, 6, 8, 17) are necessary. The reamining 14 values are simply wasting space. Assuming, this is an integer array, thats 16 * 14 = 224 bits
wasted. 

In case of a map, only as many elements as in the array (5, 6, 8, 17) are dealt with. None beyond (1,2,3,4,7,9 .... etc).

ALSO !!!!! ----> Map stores values into sorted order.

*/

#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter the size of the array\n";
    cin>>n;

    cout<<"Enter array elements\n";

    int arr[n];
    map <int, int> mpp; // first int is for KEY, second int is for VALUE.

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mpp[arr[i]] += 1;
    }

/*  *** ALTERNATE METHOD FOR BELOW CODE*** 

    map <int, int> :: iterator it;

    for(it = mpp.begin(); it != mpp.end(); it++) // Note that we use iterator it for iterating through the map. We DON'T initialise i and use it for iteration.
    {                                                                              // Also note that it HAS to be != and CANNOT be <=, in --> it != mpp.ednd();
        cout<<"Element : "<<it->first<<"  ::  Frequency : "<<it->second<<endl;// Also NO () after first and second. () comes after functions ONLY !!!
    }                                                              // first and second in iterator are NOT functions. first simply points to key while second points to value when 
    //                                                                                                                                                                  using maps
    

*/

    for(auto it : mpp)
    {
        cout<<"Element : "<<it.first<<"  ::  Frequency : "<<it.second<<endl; // first value in map is KEY and second value is VALUE always!
    }                                                                        // In this program's case, KEY --> number & VALUE --> frequency


    for(int i = 0; i < n; i++)
    {
        cout<<"\n"<<mpp[arr[i]];
    }
}


// TO REFER TO HASHED OUT CODE WITHOUT DISTURBING COMMENTS, GO TO "character_hashing_in_string_using_maps".