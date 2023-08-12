#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;
 
int main(){
	
	int n;
	cin>>n;
	
	int i=1;
	
	while(i<=n){
		
		long long t1=i*i;
		long long t2=t1-1;
		long long ktot=t1*t2/2;
		long long att=4*(i-1)*(i-2);
		cout<<ktot-att<<endl;
		i++;
	}
	return 0;
}

