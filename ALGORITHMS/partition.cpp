/*
Partition
C++ has a class in its STL algorithms library which allows us easy partition algorithms using certain inbuilt functions. Partition refers to act of dividing elements of containers depending upon a given condition.

partition operations:

1. partition(beg, end, condition) --> This function helps to patition the element on the basis of condition.
2. ispartitioned(beg, end, condition) --> Returns bool if contianer is partitioned accordingly
*/



#include<iostream> 
#include<algorithm>  
#include<vector> 
using namespace std; 
int main() 
{  
vector<int> vect = { 2, 1, 5, 6, 8, 7 }; 
        
is_partitioned(vect.begin(), vect.end(), [](int x){ return x%2==0; })?cout << "Vector is partitioned": cout << "Vector is not partitioned"; 
cout << endl; 
      
partition(vect.begin(), vect.end(), [](int x) { return x%2==0; }); 
      
is_partitioned(vect.begin(), vect.end(), [](int x){ return x%2==0; })?cout << "Vector is partitioned": cout << "Vector is not partitioned"; 
cout << endl; 
      
cout << "The partitioned vector is : "; 
for (int i ; i<vect.size() ; i++) cout << vect[i] << " ";
    
    
    
int arr1[10] = {1,5,4,7,2,8,6,0, 11,12};
int arr_size1 = sizeof(arr1)/sizeof(arr1[0]);

is_partitioned(arr1, arr1+arr_size1, [](int x){ return x%2==0; })?cout << "Array is partitioned": cout << "Array is not partitioned"; 
cout << endl; 

partition(arr1, arr1+arr_size1, [](int x) { return x%2==0; }); 

is_partitioned(arr1, arr1+arr_size1, [](int x){ return x%2==0; })?cout << "Array is partitioned": cout << "Array is not partitioned"; 
cout << endl; 

cout << "The partitioned array is : "; 
for (int i ; i<arr_size1 ; i++) cout << arr1[i] << " ";


    
    
    
     
      
    return 0; 
      
} 
