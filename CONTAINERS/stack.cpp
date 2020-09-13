/*
Stack Implementation
1. empty() - returns whether stack is empty: 
2. size() - returns the size of the stack:
3. top() - returns the reference to the top most elements in the stack:
4. push() - adds the elements to the top:
5. pop() - Deletes the top most elements of the stack:
*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void showstack(stack <int> s)
{
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}


int main()
{
	stack <int> s;
	s.push(10);
	s.push(30);
	s.push(20);
	s.push(5);
	s.push(1);

	cout<<"The Stack is"<<endl;
	showstack(s);

	cout<<"The top element in the stack is: "<<s.top() <<endl;
	cout<<"The size of the stack is: "<<s.size()<<endl;
	cout<<" Deleting top element"<<endl;
	s.pop();
	showstack(s);

	return 0;
}
