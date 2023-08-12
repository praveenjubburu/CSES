#include<bits/stdc++.h>
using namespace std;
int vis[7][7];
string s;
long long ans=0;
bool ok(int i,int j){
	return i>=0&&i<7&&j>=0&&j<7&&!vis[i][j];
}
void dfs(int i,int j,int a=0){
	if(i==6&&j==0){
		if(a==48){
			ans++;
		}
		return;
	}
	vis[i][j]=1;
	if(s[a]=='?'||s[a]=='L'){
		if(ok(i,j-1)){
		if(!(!ok(i,j-2)&&ok(i-1,j-1)&&ok(i+1,j-1))){
			dfs(i,j-1,a+1);
		}
	}
	}
	if(s[a]=='?'||s[a]=='R'){
		if(ok(i,j+1)){
		if(!(!ok(i,j+2)&&ok(i+1,j+1)&&ok(i-1,j+1))){
			dfs(i,j+1,a+1);
		}
	    }
	}
	if(s[a]=='?'||s[a]=='U'){
		if(ok(i-1,j)){
		if(!(!ok(i-2,j)&&ok(i-1,j-1)&&ok(i-1,j+1))){
			dfs(i-1,j,a+1);
		}
	}
	}
	if(s[a]=='?'||s[a]=='D'){
		if(ok(i+1,j)){
		if(!(!ok(i+2,j)&&ok(i+1,j+1)&&ok(i+1,j-1))){
			dfs(i+1,j,a+1);
		}
	}
	}
	vis[i][j]=0;
}
	
	
int main(){
	cin>>s;
	dfs(0,0);
	memset(vis,0,sizeof vis);
	cout<<ans<<endl;
	return 0;
}
