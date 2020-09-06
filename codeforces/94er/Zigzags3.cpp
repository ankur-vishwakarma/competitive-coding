#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
main(){
	FAST;
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll s[n];
		vector<ll> g[n+1];
		for(int i=0;i<n;i++) cin>>s[i],s[i]--;
		vector<ll> mp(n*n,0);
		ll ans=0;
		for(int j=n-1;j>=0;j--){
			int k=j+1;
			for(int l=k+1;l<n;l++) mp[s[k]*n+s[l]]++;
			
			for(int i=0;i<j;i++) ans+=mp[s[i]*n+s[j]];
		}
		cout<<ans<<endl;
	}
}
