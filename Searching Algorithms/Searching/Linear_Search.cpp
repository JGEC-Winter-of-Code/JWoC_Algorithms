// C++ program to implement Linear Search 

// Output:-
/* Enter the size of array
5
Enter the elements of array
1 7 9 8 17
Enter the element to be searched
9
Key found at position 2

Enter the size of array
5
Enter the elements of array
1 7 9 8 17
Enter the element to be searched
20
Key not found */

// Source Code:-

#include<iostream>
using namespace std;

int main()
{
    int total_size;

    cout<<"Enter the size of array\n";
    cin>>total_size;

    int arr[total_size],iter,key,flag=0,pos;

    cout<<"Enter the elements of array\n";
    for(iter = 0; iter < total_size; iter++)
    {
        cin>>arr[iter];
    }

    cout<<"Enter the element to be searched\n";
    cin>>key;

    for(iter = 0; iter < total_size; iter++)
    {
        if(arr[iter] == key)
        {
            flag = 1;
            pos = iter;
        }
    }

    if(flag == 1)
        cout<<"Key found at position "<<pos;
    else
        cout<<"Key not found";
    return 0;
}
