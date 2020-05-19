// author  s_agnik1511
#include <iostream>
using namespace std;
int main() {
	int i,n;
	cin>>n;
	for(i=2;i*i<=n;i++) {
	    if(n%i==0) {
	        cout<<n<<"Not prime";
	        return 0;
	    }
	}
	cout<<n<<"Prime";
	return 0;
}
