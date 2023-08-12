#include<bits/stdc++.h>
using namespace std;
 
const int mxn=9;
 
int c[mxn],dig1[mxn],dig2[mxn];
 
char ch[mxn][mxn];
 
int n=8;
 
int ans=0;
 
void dfs(int y){
	if(y==n){
		ans++;
		return;
	}
	for(int i=0;i<n;i++){
		if(c[i] || dig1[i+y] || dig2[i-y+n-1] || ch[y][i]=='*'){
			continue;
		}
		c[i]=dig1[i+y]=dig2[i-y+n-1]=1;
		dfs(y+1);
		c[i]=dig1[i+y]=dig2[i-y+n-1]=0;
	}
}
 
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	memset(c,0,sizeof c);
	memset(dig1,0,sizeof dig1);
	memset(dig2,0,sizeof dig2);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>ch[i][j];
		}
	}
	
	dfs(0);
	cout<<ans<<endl;
	
	
}
