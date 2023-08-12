#include<bits/stdc++.h>
using namespace std;
 
const int mxn=21;
 
int a[mxn];
 
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	vector<string>ans;
	
	string s;
	cin>>s;
	
	sort(s.begin(),s.end());
	
	do{
		ans.push_back(s);
	}while(next_permutation(s.begin(),s.end()));
	
	cout<<ans.size()<<endl;
	
	for(int i=0;i<(int)ans.size();i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
