/*Jump Search: https://en.wikipedia.org/wiki/Jump_search
* a jump search or block search refers to a search algorithm for ordered lists.
* It works by first checking all items Lkm, where k ∈ N and m is the block size, until an item is found that is larger than the search key. 
* To find the exact position of the search key in the list a linear search is performed on the sublist L[(k-1)m, km]. 
*/

/*Works only when the array is SORTED*/
#include <stdio.h>
#include <math.h>
//macro define 
#define MAX 20

int jumpSearch (int a[], int low, int high, int val, int n){
    int step, i; 
    step = sqrt(n);
    for (i = 0; i < step; i++){
        if (val < a[step])
            high = step - 1;
        else 
            low = step + 1;
    }
    for (i = low; i <= high; i++){
        if (a[i] == val)
            return i;
    }
    return -1;
}

int main (){
    int arr[MAX], i, n, val, pos;
    printf("Enter the Number of Elements: ");
    scanf("%d", &n);
    printf("Enter the Elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the Number to be searched: ");
    scanf("%d", &val);
    pos = jumpSearch (arr, 0, n-1, val, n);
    if (pos == -1)
        printf("\n%d is Not found in the Array.\n", val)           ;
    else 
        printf("\n%d Found at position %d\n", val, pos+1);
    return 0;
}