#include<bits/stdc++.h>
using namespace std;
#define trace(x) cerr << #x << ": " << x << endl
#define vi vector<int>
#define vii vector<vector<int>>
#define si set<int>
const int M=1e9+7;
#define ll long long
#define msi map<string,int>
#define pq priority_queue<vector<int>,vector<vector<int>>,grater<vector<int>>>
#define ar array
#define INF (int)1e9
#define mp map<int,int>
#define pi pair<int,int>
#define fi first
#define sc second
#define all(x) x.begin(),x.end()
#define pb push_back
#define REP(i,a,b) for(int i=a;i<b;i++)
#define point(x) fixed<<setprecision(x)
#define mset(x,a)  memset(x,a,sizeof x);
#define sz(x) (int)x.size()
#define sync() {ios::sync_with_stdio(false);cin.tie(0);}
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 
const int mxn=2*1e5;
 
long long a[mxn];
 
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	long long ans=0;
	
	long long last=0;
	
	for(int i=0;i<n;i++){
		ans+=max(0LL,last-a[i]);
		last=max(last,a[i]);
	}
	cout<<ans<<endl;
	return 0;
}
