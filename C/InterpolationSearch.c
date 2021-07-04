/* Interpolation Search: https://en.wikipedia.org/wiki/Interpolation_search
* Interpolation is a searching technique that finds a specified value in a sorted array.
* The concept of interpolation search is similar to how we search for names in a telephone 
* book or for keys by which a book's entries are ordered.
*/

/*Works only when the array is SORTED*/
#include <stdio.h>
//macro define
#define size 20

int interpolationSearch (int arr[], int n, int key){
    int mid;
    int low = 0, high = n -1;
    while (low <= high && key >= arr[low] && key <= arr[high]){
        mid = low + ((key - arr[low]) * (high - low)) / (arr[high] - arr[low]);
        if (key > arr[mid])
            low = mid + 1;
        else if (key < arr[mid])
            high = mid - 1;
        //if found
        else 
            return mid;
    } // if not found
    return -1;
}

int main(){
    int arr[size], i, num, key, mid;
    printf("\nEnter the Number of Elements: ");
    scanf("%d", &num);
    printf("Enter the Elements: ");
    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    printf("Enter the Number to be Searched: ");
    scanf("%d", &key);
    //call the function
    mid = interpolationSearch (arr, num, key);
    if (mid == -1)
        printf("\n%d is NOT FOUND in the Array\n", key);
    else    
        printf("\n%d Found at Position %d\n", key, mid+1);
    return 0;
}


