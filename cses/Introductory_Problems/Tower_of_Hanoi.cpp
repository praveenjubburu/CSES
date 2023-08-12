#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	if(n==1){
		cout<<1<<endl;
		cout<<1<<" "<<3<<endl;
		return 0;
	}
	cout<<(1<<n)-1<<endl;
	function<void(int,int,int,int)>toh=[&](int k,int a,int b,int c){
		if(k>0){
			toh(k-1,a,c,b);
			cout<<a<<" "<<c<<endl;
			toh(k-1,b,a,c);
		}
	};
	toh(n,1,2,3);
	return 0;
}
