//Rabin Karp Algorithm
//Language Used: C++
//Rabin Karp algorithm to search for a pttern in a string in linear time complexity
//Input Format: First line contains text, second line contains pattern to be searched
//Output Format: Output contains only one line i.e., starting index of found string else not found
//Sample Input:  abbababab
//               abab
//Sample Output: Pattern found starting from 3 index
//author:sarthakeddy

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void search(string pattern, string text, ll prime)
{
	ll pat_len=pattern.length();
	ll text_len=text.length();
	ll hash_text=0, hash_pat=0, h=1;
	ll i,j;

	for(i=0; i<pat_len-1; i++)
		h= (h*256) % prime;

	for(i=0;i<pat_len;i++)
	{
		hash_pat= (256*hash_pat + pattern[i]) %prime;
		hash_text= (256*hash_text + text[i]) %prime;
	}

	for(i=0;i<=(text_len-pat_len);i++)
	{
		if(hash_text == hash_pat)
		{
			for(j=0;j<pat_len;j++)
			{
				if(text[i+j] != pattern[j])
					break;
			}
			if(j==pat_len)
				cout<<"Pattern found starting from "<<i<<" index\n";
		}

		if(i<(text_len-pat_len))
		{
			hash_text=(256* (hash_text - text[i]*h) + text[i+pat_len]) %prime;
			if(hash_text < 0)
				hash_text+=prime;
		}
	}
}


int main()
{
	string text,pattern;
	cout<<"Enter the text\n";
	cin>>text;
	cout<<"Enter the pattern to be searched\n";
	cin>>pattern;
	search(pattern,text,101);
}