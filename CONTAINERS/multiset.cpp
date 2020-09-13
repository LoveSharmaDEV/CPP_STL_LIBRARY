/*
Multiset are the type of associative containers, same like set but with only difference that multi set can have repetitive elements.

Some Basic Functions:

begin() - returns an iterator to the first element.
end() - returns an iterator following the last element.
size() - returns the number of elements in the multiset.
max_size() - returns the maximum number of elements that the multiset can hold.
empty()  - returns whether the multiset is empty.
*/

#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main()
{	//empty multiset container

	multiset<int, greater<int>> mset1; // By default Descending order.
	
	mset1.insert(40);
	mset1.insert(30);
	mset1.insert(60);
	mset1.insert(20);
	mset1.insert(50);
	mset1.insert(50);
	mset1.insert(10);
	
	multiset<int , greater<int>> :: iterator itr;
	cout<<"The Multiset Container Is: "<<endl;
	for(itr = mset1.begin(); itr != mset1.end() ; ++itr)
	{
		cout<<*itr<< " ";
	}
	cout<<endl;
	
	multiset<int> mset2(mset1.begin() , mset1.end()); // Default in Ascending order.
	cout<<"The New MultiSet Container Is: "<<endl;
	for(itr = mset2.begin(); itr!= mset2.end() ; ++itr)
	{
		cout<<*itr<<" ";
        }
        cout<<endl;
        
        cout<<"The New MultiContainer After Removal Of Elements less than 30: ";
        mset2.erase(mset2.begin() , mset2.find(30)); // 30 Not Inclusive (weird part)
        for(itr = mset2.begin() ; itr !=  mset2.end() ; ++itr)
        {
        	cout<<*itr<<" ";
	}
	cout<<endl;
	
	int num = mset1.erase(50);
	cout<<"number removed is: "<< num <<endl;
	for(itr = mset1.begin(); itr != mset1.end() ; ++itr)
	{
		cout<<*itr<< " ";
	}
	cout<<endl;
	
	
	return 0;
	
        
	
	
	
	
	
}
