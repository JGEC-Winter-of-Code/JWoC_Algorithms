#include <bits/stdc++.h> 
using namespace std; 
bool check(int arr[], int n, int m, int d) 
{ 
	int i = 0; 
	while (i < n && m > 0) { 
		m--; 
		i += d; 
	} 

	return m == 0 ? true : false; 
} 
int maximumDistance(int arr[], int n, int m) 
{ 

	int low = 1, high = n - 1; 
	int ans = 0; 

	while (low <= high) { 

		int mid = (low + high) / 2; 
		bool flag = check(arr, n, m, mid); 

		if (flag) { 
			ans = mid; 
			low = mid + 1; 
		} 
		else { 
			high = mid - 1; 
		} 
	} 

	return ans; 
}  
int main() 
{ 

	int n = 5, m = 3; 
	int arr[n] = { 0 }; 

	cout << maximumDistance(arr, n, m); 

	return 0; 
} 

