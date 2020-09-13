/* C++ SORTING USING STL

Sorting is one of the basic fuctions applied to data structure . It means arranging data in a particular fashion, which can be increasing or decreasing. In C++ STL there is a built in function of named sort() which handles this operation.

--> Internally this uses IntroSort which is a combination of quick, heap and insertion sort.
    It uses quicksort by default, but switches to heap sort if time taken is more than N*logN, and when array is really small, it switches to insertion sort.
    
*/


#include <iostream>
#include <algorithm>
#include <vector>
#include <execution>

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



cout<<"Sorting an Array (default ascending)"<<endl;
int arr1[10] = {1,5,4,7,2,8,6,0, 11,12};
int arr_size1 = sizeof(arr1)/sizeof(arr1[0]);

sort(arr1, arr1 + arr_size1);
for(int i=0; i<arr_size1; i++)
{
cout<< arr1[i]<<" ";
}
cout<<endl;


cout<<"Sorting a Vector(descending)"<<endl;
vector<int> Vec2{5,4,6,7,3,2,8,9,1};
sort(Vec2.begin(), Vec2.end(), greater<int>());
for(int i =0; i<Vec2.size(); i++)
{
cout<<Vec2[i]<<" ";
}
cout <<endl;


cout<<"Sorting an Array (default ascending)"<<endl;
int arr2[10] = {1,5,4,7,2,8,6,0, 11,12};
int arr_size2 = sizeof(arr2)/sizeof(arr2[0]);

sort(arr2, arr2 + arr_size2, greater<int>());
for(int i=0; i<arr_size2; i++)
{
cout<< arr2[i]<<" ";
}
cout<<endl;

return 0;

}

