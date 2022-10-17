#include<iostream>
using namespace std;
int gcd(int a, int b){
		return b==0?a:gcd(b,a%b);
	}
int main() {
	cin>>n;
	int a[n];
	for(int i =0; i<n;i++){
		cin>>a[i];
	}
	for(int i = 0; i<n/2-1;i++){

	cout<<gcd(a[i],a[i+1])<<endl;
	}
	return 0;
}
