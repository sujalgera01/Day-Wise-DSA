// Kth Minimum Element from array


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	sort(arr,arr+n);
	cout<<arr[k-1]<<endl;
}



// Kth Maximum ele from an array

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	sort(arr,arr+n,greater<int>());
	cout<<arr[k-1]<<endl;
}
