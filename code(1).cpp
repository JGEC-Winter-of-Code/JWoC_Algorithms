#include<bits/stdc++.h>

using namespace std;
int jump_Search(int a[], int n, int item) {
   int i = 0;
   int m = sqrt(n); //initializing block of size= √(n)

   while(a[m] <= item && m < n) { 
     
      i = m;  // it shift the block
      m += sqrt(n);
      if(m > n - 1)  // if value of m exceeds the array size
         return -1; 
   }

   for(int x = i; x<m; x++) { //linear search in current block
      if(a[x] == item)
         return x; //position of element being searched 
   }
   return -1;
}

int main() {
   int n, item, loc;
  
   cin >> n;
   int arr[n]; //creating an array of size n
   

   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }

  
   cin >> item;
   loc = jump_Search(arr, n, item);
   if(loc>=0)
      cout << "\n Item found at location: " << loc;
   else
      cout << "\n Item is not found in the list.";
}