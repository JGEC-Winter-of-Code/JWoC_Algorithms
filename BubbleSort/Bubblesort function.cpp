// author  s_agnik1511
  //  add me across all coding platforms
#include <iostream>
using namespace std;
#define ll long long int
void swap(ll *xp,ll *yp)  {  
    ll temp=*xp;  
    *xp=*yp;  
    *yp=temp;  
}
 void bsort(ll arr[], ll n)  {  
    int i,j;  
    for (i=0;i<n-1;i++)      
    for (j=0;j<n-i-1;j++)  
        if (arr[j]>arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}
int main() {
	ll i,n;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++) {
	    cin>>a[i];
	}
	bsort(a,n);
	for(i=0;i<n;i++) {
	    cout<<a[i]<<" ";
	}
	return 0;
}
