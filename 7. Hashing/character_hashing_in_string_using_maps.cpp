/* Always use unordered map over map. unordered map should be your first preference because its average and best time complexity is O(1) i.e constant time i.e irrespective of size
of input, time taken is same. Very rarely does it have worst case of O(N) i.e linear time, where N --> no of elements. Only if it goes to worst case (which you will know if time limit
is exceeded) should you use, map. Map btw has a best, average and worst case time complexity of O(log(N)). Logarithmic time, similar to linear time increases with number of elements,
however, it is much preferable to linear time, but not as ideal as constant time O(1).

unordered_map goes to worst case because of internal collisions.

Collision refers to when 2 or more different keys produce the same value in hash table (fixed size array). Eg : 23 and 33 when %ed by 10 give 3. So both values are chained together via 
linked list at index value 3 in a map. When MULTIPLE such collisions happen, unordered_map's run time goes to O(N). Since this whole storing happens itself happens within a loop,
which also has O(N) time complexity. Total time complexity of that code segment alone becomes O(N) * O(N) = O(N^2), at which point it'll say total run time exceeded in the 
terminal.

Do refer to Hashing video of Striver from 43:00 onwards for more info on unordered map and also hashing methods (division method) !!! 

& refer notebook for diff b/w map & unordered map !!! */



#include<iostream>
#include<map>
using namespace std;

int main()
{
    string s;
    cout<<"Enter string value\n";
    cin>>s;

    map <char, int> mpp;

    for(int i = 0; i < s.size(); i++)
    {
        mpp[s[i]] += 1;
    }

    map <char, int> :: iterator it;

    for(it = mpp.begin(); it != mpp.end(); it++) // Note that we use iterator it for iterating through the map. We DON'T initialise i and use it for iteration.
    {                                                                          // Also note that it HAS to be != and CANNOT be <=. Using != is correct way of iterating using iterator.
        cout<<"Character :"<<it->first<<"Frequency :"<<it->second; // Also NO () after first and second. () comes after functions ONLY !!!
    }                                                              // first and second in iterator are NOT functions. first simply points to key while second points to value when 
//                                                                                                                                                                      using maps


/* ALTERNATE, MUCH SIMPLER WAY OF DOING ABOVE FOR LOOP CODE

    for(auto it : mpp)
    {
        cout<<"Character : "<<it.first<<" :: Frequency : "<<it.second<<endl;
    }
*/

}


// TO REFER TO HASHED OUT CODE WITHOUT DISTURBING COMMENTS, GO TO "cnt_freq__of_array_elmnts_using_maps".
// GO TO ABOVE MENTIONED PROGRAM FOR HASH ARRAY AND MAPS UNDERSTANDING AS WELL.