#include<bits/stdc++.h>
using namespace std;
 
const int mxn=1e5;
 
#define ll long long
 
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n;
	cin>>n;
	
	ll total=n*(n+1)/2;
	
	if(total%2LL!=0){
		cout<<"NO SOLUTION"<<endl;
		return 0;
	}
	
	ll i=n-1;
	
	total/=2;
	
	ll sum=0;
	
	unordered_set<ll>s;
	
	while(sum<total){
		sum+=i;
		s.insert(i);
		i--;
	}
	if(sum>total){
		sum-=(i+1);
		s.erase(s.find(i+1));
		s.insert(total-sum);
	}
	cout<<"YES"<<endl;
	cout<<s.size()<<endl;
	for(auto i:s){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<n-s.size()<<endl;
	for(int i=1;i<=n;i++){
		if(s.find(i)==s.end()){
			cout<<i<<" ";
		}
	}
}
