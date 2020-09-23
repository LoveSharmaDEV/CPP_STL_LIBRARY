/*
Unordered_Map 
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void print_um(unordered_map<string, string>m)
{
	unordered_map<string, string> :: iterator it;
	for(it = m.begin(); it != m.end(); it++)
	{
	cout<<"(KEY--> "<<it->first<<" VALUE--> "<<it->second<<")"<<endl;
	}
}
int main()
{

	// Inputting into Map
	unordered_map<string, string> um; // declaration of map
	int index;
	int size;
	string key;
	string value;
	cout<<"Enter Number Of ELements"<<endl;
	cin>>size;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter The Key: --> "<<endl;
		cin>> key;
		cout<<"Enter The Value: --> "<<endl;
		cin>> value;
		um.insert(pair<string, string> (key, value));
	}

	// size() and empty()
	cout<<"Number of element in map are "<< um.size() <<endl;
	if(!um.empty())
	{
		cout<<"Map is not empty"<<endl;
	}
	else
	{
		cout<<"Map is empty"<<endl;
	}

	// find() and count()
	cout<<"Enter the key"<<endl;
	cin>>key;
	unordered_map<string,string> :: iterator it_find;
	it_find = um.find(key);
	
	if(it_find == um.end())
	{
		cout<<"Element found in map"<<endl;
		cout<<"(KEY--> "<<it_find->first<<", VALUE--> "<< it_find->second<<endl;
	}
	else
	{
		cout<<"Element not found in map"<< endl;
	}

	if(!um.count(key))
	{
		cout<<"Element not found in map"<< endl;
	}
	else
	{
		cout<<"Element found in map"<< endl;
	}

	// erase by key
	cout<<"Enter the key for erasing through key" <<endl;
	cin>>key;
	um.erase(key);
	print_um(um);

	// erase by iterator
	cout<<"Enter the index for erasing through iterator"<<endl;
	cin>>index;
	unordered_map<string,string> :: iterator it_erase;
	cout<<"Enter number of bucket in map "<< um.bucket_count() <<endl;
	unordered_map<string, string> :: iterator it_bucket;
	it_erase = um.begin();
	advance(it_erase, index);
	um.erase(it_erase);
	print_um(um);

	// bucket(), bucket_size(), bucket_count()
	for(it_bucket = um.begin(); it_bucket != um.end(); it_bucket++)
	{
		cout<<"(KEY--> "<< it_bucket->first <<" VALUE--> "<<it_bucket->second<<" Bucket-->"<< um.bucket(it_bucket->first) <<endl;
	}
	cout<<"Enter bucket for bucket size"<<endl;
	cin>>index;
	cout<<um.bucket_size(index)<<endl;
	print_um(um);

	return 0;
}
