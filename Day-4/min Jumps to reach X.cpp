#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void minJumps(int x){
	int sum = 0, jumps = 1;
	int ans = 0;
	
	while(sum<x){
		sum = sum + jumps;
		jumps++;
	}
	
	int d = sum - x;
	if(d % 2 == 0){
		ans = jumps - 1;
	}
	else if((d + jumps)%2 == 0){
		ans = jumps;
	}
	else{
		ans = jumps + 1;
	}
	
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		minJumps(n);
	}
}
