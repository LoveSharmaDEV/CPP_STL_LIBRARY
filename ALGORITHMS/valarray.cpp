/*
Valarray is a special container whicg provides a way to efficiently perforn maths operation on an array

valarray operations

1. apply(condition)
2. sum()
3. max()
4. min()
5. shift(n), n  +ve left shift, -ve right shift
6. cshift(n), n +ve circular left shift, -ve circular right shift
7. swap, swap two valarray. 
*/

#include<iostream> 
#include<valarray> 
using namespace std; 
int main() 
{ 
 
    valarray<int> varr = { 10, 2, 20, 1, 30 }; 
    valarray<int> varr1 ;  
    varr1 = varr.apply([](int x){return x=x+5;}); 
      
  
    cout << "The new valarray with manipulated values is : "; 
    for (int &x: varr1) cout << x << " "; 
    cout << endl; 
      
    cout << "The sum of old valarray is : "; 
    cout << varr.sum() << endl; 
    cout << "The sum of new valarray is : "; 
    cout << varr1.sum() << endl; 
    cout << "The largest element of new valarray is : "; 
    cout << varr1.max() << endl; 
    cout << "The smallest element of new valarray is : "; 
    cout << varr1.min() << endl; 
    varr1 = varr1.shift(2);
    cout << "The new valarray with left shifted values is : "; 
    for (int &x: varr1) cout << x << " "; 
    cout << endl; 
    varr1 = varr1.cshift(-3); 
    cout << "The new valarray after circular shifting is : "; 
    for ( int&x : varr1) cout << x << " "; 
    cout << endl; 
    varr1.swap(varr);
    for (int &x: varr1) cout << x << " "; 
    cout << endl; 
    for (int &x: varr) cout << x << " "; 
    cout << endl; 
     
    
    
  
    return 0; 
      
} 
