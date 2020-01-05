// Program for sorting array using Quick Sort
// Quick Sort is very useful sorting algorithm used as its time complexity is O(nlogn), where n refers to number of elements

/* 
INPUT
Enter number of elements 5
Enter elements 4 8 2 6 5

OUTPUT
Sorted array: 2 4 5 6 8 
*/


#include <bits/stdc++.h> 
using namespace std;  
  
// A utility function to swap two elements  
void swap(int* ax, int* bx)  
{  
    int temp = *ax;  
    *ax = *bx;  
    *bx = temp;  
}  
  
// Function to create the partition of Array from Low to High
int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; 
    int index = (low - 1); 
  
    for (int jx = low; jx <= high - 1; jx++)  
    {  
        if (arr[jx] < pivot)  
        {  
            index++;
            swap(&arr[index], &arr[jx]);  
        }  
    }  
    swap(&arr[index + 1], &arr[high]);  
    return (index + 1);  
}  
  
// Function to implement QuickSort
void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        int pi = partition(arr, low, high);  

        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
  
// Function to print an array 
void printArray(int arr[], int size)  
{  
    int index;  
    for (index = 0; index < size; index++)  
        cout << arr[index] << " ";  
    cout << endl;  
}  
  
// Driver Code 
int main()  
{  
    int num, index;
    cout<<"Enter number of elements";
    cin>>num;
    int arr[num];
    cout<<"Enter elements"<<endl;
    for (index =0; index<num; index++)
        cin>>arr[index];
    quickSort(arr, 0, num - 1);  
    cout << "Sorted array: ";  
    printArray(arr, num);  
    return 0;  
}  
  
