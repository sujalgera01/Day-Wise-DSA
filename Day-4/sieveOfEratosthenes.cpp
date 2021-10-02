#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define long long int ll;

void sieveOfEratosthenes(int n){
	vector<int> a(n+1);
	for(int i=0;i<=n;i++){
		a[i] = 1;
	}
	a[0] = 0;
	a[1] = 0;
	
	for(int i=2;i<=sqrt(n);i++){  // i<=n wotks fine but this is more optimized.
		if(a[i] == 1){
			for(int j = 2; i*j<=n; j++){
				a[i*j] = 0;
			}
		}
	}
	
	for(int i=2;i<=n;i++){
		if(a[i] == 1){
			cout<<i<<" ";
		}	
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		sieveOfEratosthenes(n);
	}
}
