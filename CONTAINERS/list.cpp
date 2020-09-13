/*List STL LIBRARY IN C++

Standard Operation provided by C++ STL

1. front(): Returns the value of first element in the list.
2. back(): Returns the value of last element in the list.
3. push_back(): Adds a new element at the end of the list.
4. push_front(): Adds a element at the beginning of the list.
5. pop_front() - Removes the first element of the list.
6. pop_back() - Removes the last element of the list.
7. list:begin() and list::end() - returns the respective iterators.
8. empty() - returns whether list is empty or not.
9. insert() - insert new elements in the list before the element at specified postion.
10. erase() - Removes a single element or range of element from the list.
11. 
*/

#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

void showlist(list<int> g)
{
	list<int> :: iterator it;
	for(it = g.begin(); it!= g.end() ; it++)
		cout<<'\t'<< *it;
	cout<<endl;
}


int main()
{
	list<int> gqlist1, gqlist2;

	for(int i=0;i<10; i++)
	{
		gqlist1.push_back(i*2);
		gqlist2.push_front(i*3);

	}

	cout<<"The list 1 is as follows"<<endl;
	showlist(gqlist1);
	cout<<"The list 2 is as follows"<<endl;
	showlist(gqlist2);



	cout<<"The front element in the list 1 is "<< gqlist1.front()<<endl;
	cout<<"The last element in the list 2 is "<< gqlist2.back()<<endl;



	cout<<"Now we will be popping the last element from the list 1"<<endl;
	gqlist1.pop_back();
	showlist(gqlist1);
	cout<<"Now popping the front element from the list 2"<<endl;
	gqlist2.pop_front();
	showlist(gqlist2);



	cout<<"Lets reverse the list 1 " <<endl;
	gqlist1.reverse();
	showlist(gqlist1);

	

	cout<<"Sorting the list"<<endl;
	gqlist1.sort();
	showlist(gqlist1);


	cout<<"The maximum element in the list 1 is "<< *max_element(gqlist1.begin() , gqlist1.end())<<endl;






	return 0;
}
