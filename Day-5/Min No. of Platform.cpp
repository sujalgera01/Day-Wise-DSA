#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> arrival(n);
	vector<int> depart(n);
	
	for(int i=0;i<n;i++){
		cin>>arrival[i];
	}
	
	for(int i=0;i<n;i++){
		cin>>depart[i];
	}
	
	sort(arrival.begin(),arrival.end());
	sort(depart.begin(),depart.end());
	
	int platform = 1, result = 1, i=1, j=0;
	
	
	while(i<n && j<n){
		if(arrival[i] <= depart[j]){
			platform++;
			i++;
		}
		else if(arrival[i] > depart[j]){
			platform--;
			j++;
		}
		
		if(platform > result){
			result = platform;
		}
	}
	
	cout<<result<<endl;
	
}
