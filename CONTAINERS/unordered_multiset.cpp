/*
Unordered_MultiSet in C++ STL
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void print_UMS(unordered_multiset<string> ums)
{
	unordered_multiset<string> :: iterator it;
	for(it = ums.begin(); it != ums.end(); it++)
	{
		cout<< *it<< " ";
	}
	cout<<endl;
}

int main()
{


	unordered_multiset<string> ums; // Declaration of multiset
	int size;
	string ele;
	int index;
	cout<<"Enter Number Of Elements"<<endl;
	cin>>size;

	for(int i=0; i<size; i++)
	{
		cin>>ele;
		ums.insert(ele);
	}

	print_UMS(ums);

	// size and empty()
	
	cout<<"Number of elements in the set are: "<<ums.size()<<endl;
	if(!ums.empty())
	{
		cout<<"Set is not empty"<<endl;
	}
	else
	{
		cout<<"Set is empty"<<endl;
	}

	// find() and count()
	unordered_multiset<string> :: iterator it_find;
	cout<<"Enter the element you want to find"<<endl;
	cin>> ele;
	it_find = ums.find(ele);
	if(it_find == ums.end())
	{
		cout<<"Element not found"<<endl;
	}
	else
	{
		cout<<"Element is found"<<endl;
		cout<<"Element is"<<endl;
		cout<< *it_find<<endl;
	}

	cout<<"Occurence of this element is "<< ums.count(*it_find)<< " time"<<endl;

	// bucket(); bucket_size(); bucket_count();
	cout<<"Number of this bucket in this set is "<<ums.bucket_count()<<endl;
	unordered_multiset<string> :: iterator it_bucket;
	for(it_bucket = ums.begin(); it_bucket != ums.end(); it_bucket++)
	{
		cout<<"(Value: "<< *it_bucket<<", Bucket: "<<ums.bucket(*it_bucket)<<")"<<endl;
	}
	cout<<"Enter the bucket number to know size"<<endl;
	cin>>index;
	cout<<ums.bucket_size(index)<<endl;

	// erase using iterator
	unordered_multiset<string> :: iterator it_erase;
	it_erase = ums.begin();
	cout<<"Enter the index to remove"<<endl;
	cin>>index;
	advance(it_erase, index);
	ums.erase(it_erase);
	print_UMS(ums);

	// erase using key value
	cout<<"Enter element string to remove"<<endl;
	cin>>ele;
	ums.erase(ele);
	print_UMS(ums);

	

       	



	return 0;
}
