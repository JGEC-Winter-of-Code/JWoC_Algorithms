// author  s_agnik1511 | college : JGEC | YEar : 1st Year
#include <iostream>
using namespace std;
int main() {
	int i,n;
	cin>>n;
	for(i=2;i*i<=n;i++) {
	    if(n%i==0) {
	        cout<<"Not prime";
	        return 0;
	    }
	}
	cout<<"Prime";
	return 0;
}
