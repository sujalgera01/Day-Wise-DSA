#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
		
	int ct0 = 0, ct1 = 0, ct2 = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == 0){
			ct0++;
		}
		else if(arr[i] == 1){
			ct1++;
		}
		else{
			ct2++;
		}
	}
	
	int i=0;
	while(ct0 > 0){
		arr[i++] = 0;
		ct0--;
	}
	while(ct1 > 0){
		arr[i++] = 1;
		ct1--;
	}
	while(ct2 > 0){
		arr[i++] = 2;
		ct2--;
	}
	cout<<"AFTER SWAP: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
}
