/*
SEARCHING: Binary search is the widely used search algorithm, that requires array to be sorted before the search is applied. This algorithm is basically based on divide and cpnquer strategy.
In c++ STL binary_search named function handles this operation.

binary_search(start_address, end_address, value to find);

returns 0 if element not found else returns 1

*/

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

// Sort with integral data types
int main()
{
cout<<"Sorting a Vector(default ascending)"<<endl;
vector<int> Vec1{5,4,6,7,3,2,8,9,1};
sort(Vec1.begin(), Vec1.end());
for(int i =0; i<Vec1.size(); i++)
{
cout<<Vec1[i]<<" ";
}
cout <<endl;
int search_result;
search_result = binary_search(Vec1.begin(), Vec1.end(), 43);
if(search_result)
{
cout<<"Element Found"<<endl;
}
else
{
cout<<"Element not found"<<endl;
}



cout<<"Sorting an Array (default ascending)"<<endl;
int arr1[10] = {1,5,4,7,2,8,6,0, 11,12};
int arr_size1 = sizeof(arr1)/sizeof(arr1[0]);

sort(arr1, arr1 + arr_size1);
for(int i=0; i<arr_size1; i++)
{
cout<< arr1[i]<<" ";
}
cout<<endl;
search_result = binary_search(arr1, arr1+arr_size1, 5);
if(search_result)
{
cout<<"Element Found"<<endl;
}
else
{
cout<<"Element not found"<<endl;
}


return 0;
}
