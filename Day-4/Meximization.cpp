// CODEFORCES

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define long long int ll;

int main(){
	int t;
	cin>>t;
	while(t-- > 0){
		int n;
		cin>>n;
		vector<int> arr(n);
		vector<int> brr(101);
		for(int i=0;i<n;i++){
			cin>>arr[i];
			brr[arr[i]]++;
		}
		
		for(int i=0;i<=100;i++){
			if(brr[i] > 0){
				cout<<i<<" ";
				brr[i]--;
			}
		}
		
		for(int i=0;i<=100;i++){
			for(int j = 0; j<brr[i]; j++){
				cout<<i<<" ";
			}
		}
		cout<<"\n";	
	}

}
