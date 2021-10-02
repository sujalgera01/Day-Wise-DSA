//CODEFORCES
// Just do similiar to k-LCM1 but instead of checking on 'n' check on 'n-(k-3)' and print 1 for (k-3) times.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define long long int ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int temp = k-3;
		
		if((n-temp)%2 == 1){
			cout<<(n-temp)/2<<" "<<(n-temp)/2<<" "<<1<<" ";
			for(int i=0;i<k-3;i++){
				cout<<1<<" ";
			}
			cout<<endl;
		}
		else{
			if(((n-temp)/2)%2 == 0){
				cout<<((n-temp)/2)<<" "<<((n-temp)/4)<<" "<<((n-temp)/4)<<" ";
				for(int i=0;i<k-3;i++){
					cout<<1<<" ";
				}
				cout<<endl;
			}else{
				cout<<(((n-temp)/2)-1)<<" "<<(((n-temp)/2)-1)<<" "<<2<<endl;
				for(int i=0;i<k-3;i++){
					cout<<1<<" ";
				}
				cout<<endl;
			}
		}
		
	}
}
