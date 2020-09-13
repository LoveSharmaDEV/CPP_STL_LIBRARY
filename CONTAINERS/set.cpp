/*
SETS are a type of associative containers in which each element has to be unique, because the value of the element defines it. The value of the element cannot be modified once it it is added to the set, though it is possible to remove and add modified value of that element.

Some basic functions associated with Set:
1. begin(): Returns an iterator to the first element in the set.
2. end(): Returns an iterator to the theoretical element that follows last element in the set.
3. size(): Returns the number of elements in the set.
4. max_size(): Returns the maximum number of element that the set can hold.
5. empty():  Returns whether the set is empty.   

Advanced Function On Set
1. begin() - Returns an iterator to the first element in the set.
2. end() - Returns an iterator to the theoretical elements that follows last element in the set.
3. rbegin() - Returns a reverse iterator pointing to the last element in the container.
4. rend() - Returns a reverse iterator pointing to the theoretical element right before the first element in cont.
5. crbegin() - Returns a constant iterator pointing to last element in the container.
6. crend() - Returns a constant iterator pointing to position before the first element in the container.
7. cbegin() - Returns a constant iterator poinitng to first element in the container.
8. cend() - Returns a constant iterator pointing to position past the last the element in the container.
9. size() - Returns the number of element in the container.
10. max_size() - Returns the maximum number of elements that the set can hold.
11. empty() - Return whether the set is empty.
12. insert(const g) - Adds a new element 'g' to the set.
13. erase(const g) - Removes the value 'g' from the set.
14. erase(iterator pos) - Removes the element at the position pointed by the iterator.
15. iterator insert(iterator pos, const g)
*/

#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
	set<int , greater<int>> s1;
	s1.insert(40);
	s1.insert(30);
	s1.insert(60);
	s1.insert(20);
	s1.insert(50);
	s1.insert(50);
	s1.insert(10);

	// print set s1;
	set<int,greater<int>>::iterator itr;
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
		cout<<'\t'<< *itr;
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

	// lower bound and upper bound for set s1
	cout<<"s1.lower_bound(40): "<< *s1.lower_bound(40) << endl;
	cout<<"s1.upper_bound(40): "<< *s1.upper_bound(40)<< endl;

	// lower bound and upper bound for set s2
	cout<<"s2.lower_bound(40): "<< *s2.lower_bound(40)<<endl;
	cout<<"s2.upper_bound(40): "<< *s2.upper_bound(40)<<endl;

	return 0;

}





