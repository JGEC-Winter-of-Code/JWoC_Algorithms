#include <bits/stdc++.h>
using namespace std;


int main(){
  int nodes;
  int edges;
  int queries;
  cin >> nodes;
  cin >> edges;
  cin >> queries;
  
   int D[nodes][nodes];
  int nextNode[nodes][nodes];
  
   for (int i = 1; i <= nodes; i++){
    for (int j = 1; j <= nodes; j++){
	  D[i-1][j-1] = 999999999;
	  nextNode[i-1][j-1] = 999999999;
	}
  }
  
  for (int i = 1; i <= nodes; i++){
    D[i-1][i-1] = 0;
  }
  
  for (int i = 1; i <= edges; i++){
    int n1;
    int n2;
	int cost;
	cin >> n1;
	cin >> n2;
	cin >> cost;
	
	D[n1-1][n2-1] = cost;
	 nextNode[n1-1][n2-1] = n2;	
  }
  
  for (int k = 1; k <= nodes; k++){
    for (int i = 1; i <= nodes; i++){
	  for (int j = 1; j <= nodes; j++){
        if (D[i-1][j-1] > (D[i-1][k-1] + D[k-1][j-1])){
		  D[i-1][j-1] = (D[i-1][k-1] + D[k-1][j-1]);
		  nextNode[i-1][j-1] = nextNode[i-1][k-1];
		}
	  }  	  
	}
  }
  
  for (int i = 1; i <= queries; i++){
    int n1;
	int n2;
	cin >> n1;
	cin >> n2;
	
	if (n1 == n2){
	  cout << "cost = 0" << endl << n1 << "-" << n2 << endl;
	}
	else if (nextNode[n1-1][n2-1] > 9999999 || D[n1-1][n2-1] > 9999999){
	  cout << "NO PATH" << endl;
	}
	else{
	  cout << "cost = " << D[n1-1][n2-1] << endl;
	  cout << n1 << "-";
	  
	  while (n1 != n2){
	    n1 = nextNode[n1-1][n2-1];
		if (n1 == n2){
		  cout << n1 << endl;
		}
		else{
		  cout << n1 << "-";
		}
	  }
	}
  }
}