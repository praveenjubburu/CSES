#include<bits/stdc++.h>
using namespace std;
 
int main(){
	
	long long n,ans=0,current=5;
	
	cin>>n;
	
	while(current <= n){
		ans+=n/current;
		current*=5;
	}
	
	cout<<ans<<endl;
	
	return 0;
}
