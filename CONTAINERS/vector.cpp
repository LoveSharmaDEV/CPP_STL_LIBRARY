/*
Vector in C++ STL
Vectors are basically the dynamic arrays implemented in C++ STL library.
Syntax:
vector<type> Name;

ITERATORS
1. begin() - returns an iterator poiniting to first element in the vector.
2. end() - Returns an iterator that follows the last element in the vector.
3. rbegin() - returns the reverse iterator pointing to last element of the vector. IT moves from last to first.
4. rend() - returns the reverse iterator pointing to element preceding the first element in the vector.
5. cbegin() - returns the constant pointer pointing to first element.
6. cend() - returns a constant pointer pointing to element following the last element.
7. crbegin() - returns the reverse constant iterator poiniting to the last element.
8. crend() - returns the reverse constant iterator pointing to element preceding the first element.

CAPACITY
1. size(): Returns number of elements in the vector
2. max_size(): Returns the maximum number of elements that vector can hold.
3. capacity(): Returns size currently allocated storage space.
4. resize(): resizes the container so that it contains n elements.
5. empty(): returns whether container is empty or not.
6. shrink_to_fit(): Reduces the capacity of the container to fit it's size and destroys all beyond the capacity.
7. reserve(): Requests that the vector capacity be at least enough to contain n elements.

ELEMENT ACCESS
1. reference operator [g] - returns a reference to the element at position 'g' in the vector.
2. at(g) - returns a reference to the element at posistion 'g'
3. front() - returns the reference to the first element.
4. back() - returns the reference to the last element.
5. data() - Returns a direct pointer to the memory array used internally by the vector to store its owned elements.


MODIFIERS

1. assign() - It replaces new value to the vector elements by replacing old ones.
2. push_back() - push element int the vector from back.
3. pop_back() - pops the element form the back.
4. insert() - it inserts the elements before the element at specified position.
5. erase() - It is used to remove elements from a container from the specified position or range.
6. swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
7. clear() – It is used to remove all the elements of the vector container
8. emplace() – It extends the container by inserting new element at position
9. emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int> gl;

for(int i =1 ; i<=5; i++)
{
gl.push_back(i);
}

for(auto i=gl.begin(); i!=gl.end(); i++)
cout<< *i<<" ";
cout<<endl;

for (auto i = gl.cbegin(); i != gl.cend(); ++i) 
cout << *i << " "; 
cout<<endl;

for (auto ir = gl.rbegin(); ir != gl.rend(); ++ir) 
cout << *ir << " "; 
cout<<endl;  

for (auto ir = gl.crbegin(); ir != gl.crend(); ++ir) 
cout << *ir << " ";   
cout<<endl;




cout<<"Size: "<< gl.size()<<endl;
cout<<"Capacity: "<<gl.capacity()<<endl;
cout<<"Max_size: "<<gl.max_size()<<endl;
gl.resize(4);
for(auto i=gl.begin(); i!=gl.end(); i++)
cout<< *i<<" ";
cout<<endl;
if (gl.empty() == false) 
cout << "Vector is not empty"<<endl; 
else
cout << "\nVector is empty"<< endl;
gl.shrink_to_fit();
cout<<"Capacity: "<<gl.capacity()<<endl;






cout<<"Reference operator: "<< gl[0]<<endl;
cout<<"at operator "<<gl.at(0)<<endl;
cout<<"using front(): "<< gl.front()<<endl;
cout<<"using back(): "<<gl.back()<<endl;
cout<<"using pointer: "<<endl;
int* pos = gl.data();
cout<<"The first element: "<< *pos << endl;
cout<<"The second element: "<< *(pos+1)<< endl;





vector<int> v;

// fill the array with 10 five items
v.assign(5,10);
cout << "The vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
cout<<endl;

v.push_back(17);
int n = v.size();
cout<<"The last element is "<<v[n-1]<<endl;

v.pop_back();
cout << "The vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 

// insert 5 at the beginning
v.insert(v.begin(), 5);
cout<<"The first element is "<<v[0]<<endl;

v.emplace(v.begin() , 6);
cout<<"The first element is "<<v[0]<<endl;

// clear array
v.clear();
cout<<"The size after clear is: "<<v.size()<<endl;

vector<int> v1, v2; 
v1.push_back(1); 
v1.push_back(2); 
v2.push_back(3); 
v2.push_back(4); 
  
cout << "\n\nVector 1: "; 
for (int i = 0; i < v1.size(); i++) 
cout << v1[i] << " "; 

cout << "\nVector 2: "; 
for (int i = 0; i < v2.size(); i++) 
cout << v2[i] << " "; 
  
v1.swap(v2); 
  
cout << "\nAfter Swap \nVector 1: "; 
for (int i = 0; i < v1.size(); i++) 
cout << v1[i] << " "; 
  
cout << "\nVector 2: "; 
for (int i = 0; i < v2.size(); i++) 
cout << v2[i] << " "; 
cout<< endl;



 
return 0; 
}

