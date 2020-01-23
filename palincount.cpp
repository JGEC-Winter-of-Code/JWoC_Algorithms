// C++ program for the 
// above approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to check 
// palindrome 
bool isPalindrome(string& s) 
{ 
	int left = 0, right = s.size() - 1; 
	while (left <= right) { 
		if (s[left] != s[right]) { 
			return false; 
		} 
		left++; 
		right--; 
	} 
	return true; 
} 

// Function to calculate 
// the sum of n-digit 
// palindrome 
long long getSum(int n) 
{ 

	int start = pow(10, n - 1); 
	int end = pow(10, n) - 1; 

	long long sum = 0; 

	// Run a loop to check 
	// all possible palindrome 
	for (int i = start; i <= end; i++) { 
		string s = to_string(i); 
		// If palndrome 
		// append sum 
		if (isPalindrome(s)) { 
			sum += i; 
		} 
	} 

	return sum; 
} 

// Driver code 
int main() 
{ 

	int n = 1; 
	long long ans = getSum(n); 
	cout << ans << '\n'; 

	return 0; 
} 


