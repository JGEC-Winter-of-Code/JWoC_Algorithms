//Manacher Algorithm
//Language Used: C++
//Manacher algorithm to find longest palindromic substring in linear time complexity
//Input Format: First and only line of input contains input string 
//Output Format: Output contains only one line i.e., longest palindromic substring
//Sample Input:  malayamalayalamala
//Sample Output: malayalam
//author:sarthakeddy

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void find_longest_palindromic_substring(string s)
{
	ll n=s.length();
	n=2*n + 1;
	ll len[n];
	len[0]=0;
	len[1]=1;
	ll center,right,i,left,max_length,max_center,start,end,diff;
	center=1;
	right=2;
	max_center=max_length=0;
	start=end=diff=-1;

	for(i=2;i<n;i++)
	{
		left=2*center - i;
		len[i]=0;
		diff=right-i;
		if(diff > 0)
			len[i]=min(len[left] , diff);

		while((( i+len[i] < n ) && ( i-len[i] > 0 )) && ( ((i+len[i]+1)%2 == 0) || (s[(i+len[i]+1)/2] == s[(i-len[i]-1)/2])))
			len[i]++;

		if(len[i] > max_length)
		{
			max_length=len[i];
			max_center=i;
		}

		if(i+len[i] > right)
		{
			center=i;
			right=i+len[i];
		}
	}

	start = (max_center - max_length)/2;
	end=start+max_length-1;
	for(i=start;i<=end;i++)
		cout<<s[i];
	cout<<endl;
}

int main()
{
	string s;
	cout<<"Enter the string\n";
	cin>>s;
	find_longest_palindromic_substring(s);
	return 0;
}