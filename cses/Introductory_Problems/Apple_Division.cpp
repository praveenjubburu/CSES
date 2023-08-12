#include<bits/stdc++.h>
using namespace std;
 
const int mxn=21;
 
int a[mxn];
 
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int n;cin>>n;
	
	long long sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	long long ans=LONG_LONG_MAX;
	for(int i=0;i<(1<<n);i++){
		long long curr_sum=0;
		for(int j=0;j<n;j++){
			if(i&(1<<j)){
				curr_sum+=a[j];
			}
		}
		if(curr_sum !=sum)ans=min(ans,abs((sum-curr_sum)-curr_sum));
	}
	
	cout<<ans<<endl;
	return 0;
}
	
