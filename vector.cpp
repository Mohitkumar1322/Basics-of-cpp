Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.
Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.

Declaration
vector<int>v; (creates an empty vector of integers)
vector<int>v(10); (creates an integer vector of size 10)
vector<int>v(10, 0); (creates an integer vector of size 10, containing 0)
Size:
int size = v.size();
Pushing an integer into a vector:
v.push_back(x); (where x is an integer.The size increases by 1 after this.)
Popping the last element from the vector:
v.pop_back(); (After this the size decreases by 1)
Sorting a vector:
sort(v.begin(), v.end()); (Will sort all the elements in the vector)
// begin() - Returns an iterator pointing to the first element in the vector
// end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
erase(int position):
Removes the element present at position.
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
erase(int start,int end):
Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex: v.erase(v.begin()+2,v.begin()+5); (erases all the elements from the third element to the fifth element.)
