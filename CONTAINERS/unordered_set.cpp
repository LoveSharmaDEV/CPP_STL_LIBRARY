/*Unordered_Set*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_US(unordered_set<string> us)
{
	unordered_set<string> :: iterator it;
	for(it = us.begin(); it != us.end(); it++)
	{
		cout<< *it<<" ";
	}
	cout<<endl;
}

int main()
{
	unordered_set<string> us; //declaration of an unordered set
	int size;
	string ele;
	int index;

	cout<<"Enter the number of elements in the set"<<endl;
	cin>> size;

	for(int i=0; i<size; i++)
	{
		cin>>ele;
		us.insert(ele);
	}

	print_US(us);

	// size and empty()
	cout<<"The number of elements in set: "<< us.size()<<endl;
	if(!us.empty())
	{
		cout<<"Set is not empty"<<endl;
	}
	else
	{
		cout<<"Set is not empty"<<endl;
	}
	
	// find and count()
	
	cout<<" Enter the element you want to check for existence using count() "<<endl;
	cin>>ele;
	if(us.count(ele))
	{
		cout<<"Element is present"<<endl;
	}
	else
	{
		cout<<"Element is not present "<<endl;
	}

	cout<<"Enter the element you want to check for existence using find() "<<endl;
	cin>>ele;
	unordered_set<string>::iterator it_find;
	it_find = us.find(ele);
	if(it_find == us.end())
	{
		cout<<"Element not present"<<endl;
	}
	else
	{
		cout<<"Element is present"<<endl;
		cout<<"The element is "<<endl;
		cout<< *it_find<<endl;
	}

	// bucket, bucket_count, bucket_size()
	
	cout<<"Number of bucket in unordered_set is "<< us.bucket_count() <<endl;
	for(it_find = us.begin(); it_find != us.end(); it_find++)
	{
	cout<<"Element: "<<*it_find<<" --> "<<"Bucket Number: "<<us.bucket(*it_find)<<" "<<endl;

	}
		
	cout<<"Enter the bucket number"<<endl;
	cin>>index;
	cout<<"Number of element in this bucket is "<<us.bucket_size(index)<<endl;


	

  	// Removing an element from the set using an iterator;
	cout<<"Enter the index to remove"<<endl;
	cin>>index;
	unordered_set<string>::iterator it_new;
	it_new = us.begin();
	advance(it_new , index);
	us.erase(it_new);
	print_US(us);

	// Removing an element using key value;
	cout<<"Enter the element you want to remove"<<endl;
	cin>>ele;
	us.erase(ele);
	print_US(us);
	




	






	return 0;
}
