#include<bits/stdc++.h>
using namespace std;
 
const int mxn=1e5;
 
int main(){
	
	int n;
	cin>>n;
	
	while(n--){
		
		long long k;
		cin>>k;
		long long i=1;
		long long total=0,total2=0	;
		for(;i<=k;i++){
			total+=(9LL*i)*(long long)pow(10,i-1);
			if(total>=k){
				break;
			}
			total2=total;
		}
        
		long long l=pow(10,i-1);
		long long r=pow(10,i)-1;
		
 
		
		long long ans=0,start=0;
		
		long long lower=l;
		
		while(l<=r){
			
			long long mid=(l+r)/2;
			
			long long pos=total2+1+(mid-lower)*i;
			
			
			if(pos<=k){
				if(mid>ans){
					ans=mid;
					start=pos;
				}
				l=mid+1;
			}else{
				r=mid-1;
			}
			
		}
		string number=to_string(ans);
		cout<<number[k-start]<<endl;
	}
}
