// C++ program to implement recursive Binary Search 
  // Sample input:
  // [2,3,4,10,40]
  // 10
  // Sample Output:
  // Element is present at index 3
#include <iostream> 
using namespace std; 
  
// A iterative binary search function. It returns 
// location of x in given array arr[l..r] if present, 
// otherwise -1 
int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (arr[m] == x) 
            return m; 
  
        // If x greater, ignore left half 
        if (arr[m] < x) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return -1; 
} 

  
int main(void) 
{ 
    int array[] = { 2, 3, 4, 10, 40 }; 
    int target = 10; 
    int size = sizeof(array) / sizeof(array[0]); 
    int result = binarySearch(array, 0, size - 1, target); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0; 
} 