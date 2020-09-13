/*
 QUEUE USING STL

 1. empty() - returns whether the queue was empty
 2. size() - returns the size of the queue
 3. queue:swap() - exchanges the contents of two queues
 4. queue:emplace() - Insert element to the end of the queue
 5. queue:front() - front function returns a reference to the first element
 6. queue:back() - back functions returns the reference to the last element 
 7. push() - adds new element in the queue
 8. pop() - deletes the first element of the queue. 
 */

#include<bits/stdc++.h>
using namespace std;

void show( queue <int> gq)
{
	queue <int> g = gq;
	while(!g.empty())
	{
		cout<<g.front()<<" " ;
		g.pop();
	}
	cout<<endl;
}

int main()
{
    queue <int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);

    cout << "The queue gquiz is : ";
    show(qu);

    cout << "\nqu.size() : " << qu.size();
    cout << "\nqu.front() : " << qu.front();
    cout << "\nqu.back() : " << qu.back();

    cout << "\nqu.pop() : ";
    qu.pop();
    show(qu);

    return 0;
}


