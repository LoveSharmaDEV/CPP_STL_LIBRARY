/*
SETS are a type of associative containers in which each element has to be unique, because the value of the element defines it. The value of the element cannot be modified once it it is added to the set, though it is possible to remove and add modified value of that element.

Some basic functions associated with Set:
1. begin(): Returns an iterator to the first element in the set.
2. end(): Returns an iterator to the theoretical element that follows last element in the set.
3. size(): Returns the number of elements in the set.
4. max_size(): Returns the maximum number of element that the set can hold.
5. empty():  Returns whether the set is empty.   

*/

#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
	set<int> s1;
	s1.insert(40);
	s1.insert(30);
	s1.insert(60);
	s1.insert(20);
	s1.insert(50);
	s1.insert(50);
	s1.insert(10);

	// print set s1;
	set<int>::iterator itr; // By default value will be stored in ascending order. Use set<int, greater<int>> for oppposite.
	cout<<"the set s1 is: "<< endl;
	for(itr = s1.begin(); itr != s1.end() ; ++itr)
	{
		cout<<'\t'<< *itr;
	}
	cout<<endl;

	set <int> s2(s1.begin() , s1.end());
	cout<<"the s2 set is: "<<endl;

	// print set s2;
	for(itr = s2.begin(); itr!=s2.end(); ++itr)
	{
		cout<<'\t'<< *itr; // Dereferencing itr
	}

	//remove element with value 50 in s2;
	int num;
	cout<<"s2.erase(50)"<<endl;
	num = s2.erase(50);
	cout<<"removed"<<endl;
	for(itr = s2.begin() ; itr !=s2.end()l ++itr)
	{
		cout<<'\t'<<*itr;

	}
	cout<<endl;


	return 0;

}





