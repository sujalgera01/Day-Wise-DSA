#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

bool rotate(string s1, string s2){
	if(s1.size() != s2.size()){
		return false;
	}
	string temp = s1+s1;
	return (temp.find(s2) != string::npos);
		
}


int main(){
	string s1,s2;
	cin>>s1>>s2;
	
	if(rotate(s1,s2)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
