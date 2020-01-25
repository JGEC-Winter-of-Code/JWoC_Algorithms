#include <bits/stdc++.h> 
using namespace std; 

const int sz = 1e5; 
bool isPrime[sz + 1]; 
void sieve() 
{ 
	memset(isPrime, true, sizeof(isPrime)); 

	isPrime[0] = isPrime[1] = false; 

	for (int i = 2; i * i <= sz; i++) { 
		if (isPrime[i]) { 
			for (int j = i * i; j < sz; j += i) { 
				isPrime[j] = false; 
			} 
		} 
	} 
} 
void findPrimesD(int d) 
{ 
	int left = pow(10, d - 1); 
	int right = pow(10, d) - 1; 

	for (int i = left; i <= right; i++) { 
		if (isPrime[i]) { 
			cout << i << " "; 
		} 
	} 
} 

int main() 
{ 

	sieve(); 
	int d = 1; 
	findPrimesD(d); 

	return 0; 
} 
