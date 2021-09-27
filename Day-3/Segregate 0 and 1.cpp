#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		int left = 0;
		int right = n-1;

		while(left<right){
			if(arr[left] == 1){
				swap(arr[left],arr[right]);
				right--;
			}
			else{
				left++;
			}
		}
		cout<<"AFTER SWAPPING: ";
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
}
