//Heap Sort Algorithm
//Language Used: C++
//Heap Sort algorithm to sort array of elements in ascending order
//Input Format: First line contains size of array, second line contains array elements
//Output Format: Output contains only one line i.e., sorted array of elements
//Sample Input:  5
//               5 6 4 3 2
//Sample Output: 2 3 4 5 6
//author:sarthakeddy

#include <bits/stdc++.h> 
using namespace std;
#define ll long long

//Creation of heap using heapify function
void heapify(ll *arr, ll n, ll i) 
{
    ll largest=i;
    ll left=(2*i + 1);
    ll right=(2*i + 2);

    // Find the largest element among root and it's left and right child
    if(left < n && arr[left] > arr[largest])
        largest=left;

    if(right < n && arr[right] > arr[largest])
        largest=right;

    if(largest != i)   // If largest element is not in root then make largest as root
                       // and reheapify
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

//Sorting of array using heap sort
void heapsort(ll *arr, ll n) 
{
    for(ll i=n/2-1;i>=0;i--)    //Firstly, make heap using heapify
        heapify(arr,n,i);

    for(ll i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);    // Swap first and last element as root is largest element
        heapify(arr,i,0);       // Reheapify array with size reduced
    }
} 
  
void printarray(ll *arr, ll n) 
{ 
    for(ll i=0; i<n; ++i) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
int main() 
{
    ll n;
    cout<<"Enter the size of array\n";
    cin>>n;
    ll arr[n],i;
    cout<<"Enter the elemnts in array\n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    heapsort(arr, n); 
    cout<<"Sorted array after heap sort is\n"; 
    printarray(arr, n); 
} 