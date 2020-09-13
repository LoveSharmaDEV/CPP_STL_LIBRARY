/*
Non Manipulating Algorithms
1. sort(first_iterator, last_iterator) - To sort the given vector.
2. reverse(first_iterator, last_iterator) - Reverses the vector.
3. *max_element(first_iterator, last_iterator) - To find the max in a vector
4. *min_element(first_iterator, last_iterator) - To find minimum element of vector.
5. accumulate(first_iterator, last_iterator, initial_value_of_sum) - performs sum of all elements.  
*/

#include <algorithm> 
#include <iostream> 
#include <vector> 
#include <numeric> //For accumulate operation
using namespace std; 

int main()
{
vector<int> Vec1{5,4,6,7,3,2,8,9,1};
cout<<"Initial vector is "<<endl;
for(int i=0; i<Vec1.size(); i++)
{
cout<<Vec1[i]<<" ";
}


cout<<"\nReversing the vector"<<endl;
reverse(Vec1.begin() , Vec1.end());
cout<< "Vector After reversing is"<<endl;
for(int i=0; i<Vec1.size(); i++)
{
cout<<Vec1[i]<<" ";
}


cout << "\nMaximum element of vector is: " << endl;
cout<< *max_element(Vec1.begin(), Vec1.end()) << endl;
cout << "Minimum element of vector is: " << endl;
cout<< *min_element(Vec1.begin(), Vec1.end())<<endl;


cout << "\nThe summation of vector elements is: "; 
cout << accumulate(Vec1.begin(), Vec1.end(), 0); 



//*******************************************************************************************************




int arr1[10] = {1,5,4,7,2,8,6,0, 11,12};
int arr_size1 = sizeof(arr1)/sizeof(arr1[0]);
cout<<"Initial Array is";
for(int i=0; i<arr_size1; i++)
{
cout<< arr1[i]<<" ";
}
cout<<endl;



cout<<"\nReversing the array"<<endl;
reverse(arr1 , arr1+arr_size1);
cout<< "Array After reversing is"<<endl;
for(int i=0; i<arr_size1; i++)
{
cout<<arr1[i]<<" ";
}

cout << "\nMaximum element of array is: " << endl;
cout<< *max_element(arr1 , arr1+arr_size1) << endl;
cout << "Minimum element of array is: " << endl;
cout<< *min_element(arr1 , arr1+arr_size1)<<endl;


cout << "\nThe summation of array elements is: "; 
cout << accumulate(arr1 , arr1+arr_size1, 0)<< endl; 


return 0;

}
  
