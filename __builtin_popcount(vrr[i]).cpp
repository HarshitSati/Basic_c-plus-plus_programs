#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> vrr(n);
	for(int i =0;i<n;i++){
			  
			cin>>vrr[i]; // vrr.push_back(i);
	}
	for(int i =0;i<n;i++){
		
	cout<< __builtin_popcount(vrr[i]) <<endl;
	}
	return 0;
} // input 3 3 4 5 the Let total steps is n, find the nearest integer which is of power 2 and less then n. let it would be k. now remaining steps to cover is n-k and result = 1 + min steps for (n-k) remaining steps.
