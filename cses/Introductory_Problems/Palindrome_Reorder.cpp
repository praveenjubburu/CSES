#include<bits/stdc++.h>
using namespace std;
 
const int mxn=1e5;
 
int main(){
	
	string s;
	cin>>s;
	
	map<char,int>mp;
	
	int odd_count=0;
	
	for(int i=0;i<(int)s.size();i++){
		mp[s[i]]++;
	}
	char mid_char='!';
	for(auto i : mp){
		if(i.second&1){
			odd_count++;
			mid_char=i.first;
		}
	}
	if(odd_count>1){
		cout<<"NO SOLUTION"<<endl;
		return 0;
	}
	
	string ans="";
	mp[mid_char]--;
	
	for(auto i:mp){
		for(int j=0;j<(i.second)/2;j++){
			ans+=i.first;
		}
	}
	if(mid_char!='!'){
		ans+=mid_char;
	}
	string ans1="";
	for(auto i:mp){
		for(int j=0;j<(i.second)/2;j++){
			ans1+=i.first;
		}
	}
	reverse(ans1.begin(),ans1.end());
	cout<<ans+ans1;
	
	return 0;
}
