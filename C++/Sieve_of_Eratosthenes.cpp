/*
* NAME- SYED MODASSIR ALI
* JALPAIGURI GOVERNMENT ENGINEERING COLLEGE
*/

//including STL
#include <bits/stdc++.h>															
using namespace std;

//fast input-output with cin and cout
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);		 

#define f(i,start,end,n) for(ll i=start;i<end;i=i+n)								
#define rf(i,start,end,n) for(ll i=start-1;i>=end;i=i-n)							
#define br	cout<<"\n"                                                              // always use for line change cout<<"\n"; instead of cout<<endl;
#define test(t) 	int t;cin>>t;while(t--)											

typedef long long ll;													
typedef double db;
typedef unsigned u;
typedef signed sg;
typedef short sh;

//Sieve of Eratosthenes to print all prime between 1-n
void allPrime(ll n){

	//creating a boolean array;
	bool prime[n+1];
	//initailize all enteries as true  using memset() memset function has following parameters, variable,value,size
	memset(prime, true, sizeof(prime));
	
	//running loop from 2 as all numbers will be a multiple of 1
	for(ll p=2;p*p<=n;p++)
	{
	
		//if prime[p] is true then it is prime
		if(prime[p]==true)
			{
				// Update all multiples of p lesser than or  
            	// equal to the square of it as non prime
            	for (int i=p*p;i<n;i+=p)
            		prime[i]=false;
			} 
	}
	
		// Print all prime numbers 
    	for (ll p=2; p<=n; p++) 
       		if (prime[p]) 
          		cout << p << " ";

}

//Solution to the problem
void solution()
{
    int N;
	cout<<"Enter the value of n to calculate all prime numbers from 1 to n \n";
    cin>>N;
    allPrime(N);
}
 
int main()
{
	fio;
	solution();
	return 0;
}

