/*
MULTIMAP:
MultiMap is similar to map with an addition that multiple elements can have same keys. Key value pair has not to be unique.

Some Basic Functions Associated With MultiMap:

1. begin() - Returns an iterator to the first elements in the multimap.
2. end() - Returns an iterator to the theeretical elements that follows last element in the multimap.
3. size() - Returns the number of elements in the multimap.
4. max_size() - Returns the maximum number of elements that a multimap can hold.
5. empty() - Returns whether multimap is empty or not.
6. pair<int , int> insert(key, value): Adds a new element to the multimap.
*/

#include <iostream> 
#include <map> 
#include <iterator> 

using namespace std; 

int main() 
{ 
	multimap <int, int> gquiz1;	 // empty multimap container 

	// insert elements in random order 
	gquiz1.insert(pair <int, int> (1, 40)); 
	gquiz1.insert(pair <int, int> (2, 30)); 
	gquiz1.insert(pair <int, int> (3, 60)); 
	gquiz1.insert(pair <int, int> (4, 20)); 
	gquiz1.insert(pair <int, int> (5, 50)); 
	gquiz1.insert(pair <int, int> (6, 50)); 
	gquiz1.insert(pair <int, int> (6, 10)); 

	// printing multimap gquiz1 
	multimap <int, int> :: iterator itr; 
	cout << "\nThe multimap gquiz1 is : \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) 
	{ 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	cout << endl; 

	// assigning the elements from gquiz1 to gquiz2 
	multimap <int, int> gquiz2(gquiz1.begin(),gquiz1.end()); 

	// print all elements of the multimap gquiz2 
	cout << "\nThe multimap gquiz2 after assign from gquiz1 is : \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	cout << endl; 

	// remove all elements up to element with value 30 in gquiz2 
	cout << "\ngquiz2 after removal of elements less than key=3 : \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3)); 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 

	// remove all elements with key = 4 
	int num; 
	num = gquiz2.erase(4); 
	cout << "\ngquiz2.erase(4) : "; 
	cout << num << " removed \n" ; 
	cout << "\tKEY\tELEMENT\n"; 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 

	cout << endl; 


	return 0; 

} 

