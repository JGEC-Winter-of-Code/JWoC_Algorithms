//Counting Substrings of String Algorithm
//Language Used: C++
//Counting Different Substrings in a given string in N^2 time complexity.
//Input Format: First and only line of input contains input string 
//Output Format: Output contains Count of substrings and different substrings
//Sample Input:  abbaa
//Sample Output: Number of different substrings is 12
//				 Different substrings are
//				 a aa ab abb abba abbaa b ba baa bb bba bbaa               
//author:sarthakeddy

#include <bits/stdc++.h> 
using namespace std; 
#define ll long long

void printsubstring(string s) 
{ 
	set<string> str;
	ll n=s.length();

	for(ll i=0;i<n;i++)
	{
		string sub="";
		for(ll j=i;j<n;j++)
		{
			sub=sub+s[j];
			str.insert(sub);
		}
	}

	cout<<"Number of different substrings is "<<str.size()<<"\n";
	cout<<"Different substrings are\n";
	for (auto itr : str) 
		cout<< itr <<" ";
	cout<<endl; 
} 

int main() 
{ 
	string s;
	cout<<"Enter the string\n";
	cin>>s; 
	printsubstring(s); 
	return 0; 
} 
