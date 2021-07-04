/*
* Linear Search: https://en.wikipedia.org/wiki/Linear_search
* A linear search or sequential search is a method for finding an element within a list. 
* It sequentially checks each element of the list until a match is found or the whole list has been searched
 
*/
#include <stdio.h>
 
int main(){
    int arr[50];
    int i, key, num, flag = 0;
    printf("Enter the Number of Elements: ");
    scanf("%d", &num);
    printf("Enter the Elements: ");
    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    printf("Enter the Number you want to search: ");
    scanf("%d", &key);
    //check the each element with key 
    for (i = 0; i < num; i++){
        if (arr[i] == key){
            flag = 1;
            break;
        }  
    }
    //check the flag 
    if (flag == 1)
        printf("%d is Found at Position %d :)\n", key, i+1);
    else 
        printf("%d is NOT Found :(\n", key);
    return 0;
}