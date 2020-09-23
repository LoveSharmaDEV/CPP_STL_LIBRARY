/*
Unordered-Multimap
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_umm(unordered_multimap<string, string> umm)
{
	unordered_multimap<string, string> :: iterator it;
	for(it = umm.begin(); it !=  umm.end(); it++)
	{
		cout<<"(KEY--> "<<it->first<<", VALUE--> "<<it->second<<")"<<endl;
	}
	cout<<endl;

	umm.erase("love");

}
int main()
{
	unordered_multimap<string, string> umm;
	int size;
	string value;
	string key;
	cout<<"Enter the size: "<<endl;
	cin>>size;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter the key value: "<<endl;
		cin>>key;
		cout<<"Enter the value"<<endl;
		cin>>value;
		umm.insert(pair<string, string>(key, value));
	}

	print_umm(umm);
	
	// Remaining helper methods are same as unordered_map

	



	return 0;

}
