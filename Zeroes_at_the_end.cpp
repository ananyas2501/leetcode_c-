#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
  
void ZerosToEnd(vector <int> arr) 
{ 
    int count = 0;  // Count of non-zero elements 
    int n=arr.size();
    for (int i = 0; i < n; i++) 
        if (arr[i] != 0) 
            arr[count++] = arr[i];
  
    // Now all non-zero elements have been shifted to front and 'count' is set as index of first 0.  
    while (count < n) 
        arr[count++] = 0; 
}  
int main() 
{ 

    vector <int> arr;
    cin>>n;
    for(int i=0; i<n; i++)
    {
      int num;
      cin>>num;
      arr.push_back(num);
     }
    ZerosToEnd(arr); 
    for (int i = 0; i < n; i++) 
        cout << arr[i]<<endl; 
    return 0; 
} 
