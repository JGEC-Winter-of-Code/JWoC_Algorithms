#include <iostream> 
using namespace std; 
  
int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int mid = l + (r - l) / 2; 
  
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] < x) 
            l = mid + 1; 
  
        else
            r = mid - 1; 
    } 
    return -1; 
} 
  
int main(void) 
{ 
    int n,tmp;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    
    int arr[n];
    cout<<"Enter"<<n<<"values in the array \n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<"Enter the number to search \n";
    int x;
    cin>>x;
    
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0; 
} 
