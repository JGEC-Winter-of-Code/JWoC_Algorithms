/*
* Binary Search: https://en.wikipedia.org/wiki/Binary_search_algorithm
* Binary search compares the target value to the middle element of the array. 
* If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, 
* again taking the middle element to compare to the target value, and repeating this until the target value is found. 
* If the search ends with the remaining half being empty, the target is not in the array. 
*/ 

#include <stdio.h>
#include <stdlib.h>
//macro define
#define size 10
//function prototype declaration
int smallest (int arr[], int k, int n);
void selectionSort (int arr[], int n);

int main(){
    int arr[size], key, i, num, beg, end, mid, flag = 0;
    printf("Enter the Number of Elements: ");
    scanf("%d", &num);
    printf("Enter the Elements: ");
    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    //sort the array first
    selectionSort (arr, num);
    printf("The Sorted Array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);
    //read the number that has to be searched from user
    printf("\nEnter the Number to searched:");
    scanf("%d", &key);
    //initialise the beginning value with 0 and end with n-1 as per array index
    beg = 0;
    end = num - 1;
    while (beg <= end){
        mid = (beg + end) / 2;
        if (arr[mid] == key){
            printf("\n%d is Found in the Array at Position %d\n", key, mid+1);
            flag = 1;
            break;
        }
        //key less than mid value
        else if (arr[mid] > key)
            end = mid - 1;
        //key greater than mid value
        else
            beg = mid + 1;
    }
    if (beg > end && flag == 0)
        printf("\n%d is NOT FOUND in the array\n", key);
    return 0;
}

//sort the array using selection sort
void selectionSort (int arr[], int n){
    int k, pos, temp;
    for (k = 0; k < n; k++){
        pos = smallest (arr, k, n);
        temp = arr[k];
        arr[k] = arr[pos];
        arr[pos] = temp;
    }
}

int smallest (int arr[], int k, int n){
    int pos = k, small = arr[k], i;
    for (i = k+1; i < n; i++){
        if (arr[i] < small){
            small = arr[i];
            pos = i;
        }
    }
    return pos;
}

