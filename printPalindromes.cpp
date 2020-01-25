// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

int reverse(int num) 
{ 
	int rev = 0; 
	while (num > 0) { 
		rev = rev * 10 + num % 10; 
		num = num / 10; 
	} 
	return rev; 
} 

bool isPalindrome(int num) 
{ 
	if (num == reverse(num)) 
		return true; 

	return false; 
} 

void printPalindromes(int d) 
{ 
	if (d <= 0) 
		return; 

	int smallest = pow(10, d - 1); 
	int largest = pow(10, d) - 1; 

	for (int i = smallest; 
		i <= largest; i++) { 
		if (isPalindrome(i)) 
			cout << i << " "; 
	} 
} 
int main() 
{ 
	int d = 2; 

	printPalindromes(d); 

	return 0; 
} 
