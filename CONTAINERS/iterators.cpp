/*
 Iterators are used to point at the memory addresses of STL containers. They are primarily used in sequence of numbers and characters. They reduces complexity and time execution of the program.

 begin() - The function is used to return the beginning position of the container.
 end() - This function is used to return the after end postion of the container.

 */

#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;
int main()
{
    vector<int> ar = { 1, 2, 3, 4, 5 };

    // Declaring iterator to a vector
    vector<int>::iterator ptr;

    // Displaying vector elements using begin() and end()
    cout << "The vector elements are : ";
    for (ptr = ar.begin(); ptr< ar.end(); ptr++)
        cout << *ptr << " ";

    return 0;
}
