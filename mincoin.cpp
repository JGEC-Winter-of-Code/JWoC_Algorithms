// C++ program to find minimum number of coins needed
//       input format
//enter the amount  to get minimum denomination required
#include <bits/stdc++.h> 
using namespace std; 

// All denominations of Indian Currency 
int Curr[] = { 1, 2, 5, 10, 20, 50, 100, 500, 1000 }; 
int n = sizeof(Curr) / sizeof(Curr[0]); 

void MinCoin(int V) 
{ 
	// Initialize the vector result 
	vector<int> ans; 

	// Traverse all the Currency 
	for (int i = n - 1; i >= 0; i--) { 
	 
		while (V >= Curr[i]) { 
			V -= Curr[i]; 
			ans.push_back(Curr[i]); 
		} 
	} 
	for (int i = 0; i < ans.size(); i++) 
		cout << ans[i] << " "; 
} 
//main program
int main() 
{ 
	int n ;
	cin>>n;
	cout << "Minimal number of coin for " << n << " : "; 
	MinCoin(n); 
	return 0; 
} 
