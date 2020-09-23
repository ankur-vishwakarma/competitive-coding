#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#include<unordered_map>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;
ll n,s[1001];

void solve(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s,s+n);
	ll ans[n];
	ans[0]=s[n-1];
	ll till_nw=ans[0];
	for(int i=1;i<n;i++){
		ll local=INT_MIN,flag=-1;
		for(int j=0;j<n-1;j++){
			if(!s[j]) continue;
			ll in=__gcd(till_nw,s[j]);
			if(in>local){
				flag=j;
				local=in;
			}
		}
		ans[i]=s[flag];
		till_nw=local;
		s[flag]=0;
	}
	for(int i=0;i<n;i++) cout<<ans[i]<<" ";
	cout<<endl;
}


main(){
	FAST;
	int t;
	cin>>t;
	while(t--) solve();
}
