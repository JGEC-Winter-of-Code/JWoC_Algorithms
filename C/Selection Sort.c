#include <stdio.h> 

void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}   
void selectionSort(int arr[], int n)  
{  
    int i, j, idx;  
    for (i = 0; i < n-1; i++)  
    { 
        idx = i;  
        for (j = i+1; j < n; j++)  
            if (arr[j] < arr[idx])  
                idx = j;  
        swap(&arr[idx], &arr[i]);  
    }  
}  
void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        printf("%d ",arr[i]);
    printf("\n");
}    
int main()  
{  
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
      scanf("%d",&arr[i]);
    selectionSort(arr, n);  
    printf("Sorted array: \n");  
    printArray(arr, n);  
    return 0;  
} 
