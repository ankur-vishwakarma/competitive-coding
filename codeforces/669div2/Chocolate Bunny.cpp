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

main(){
	FAST;
	int n;
	cin>>n;
	int q=n*2;
	int i=0,j=1,it=0;
	int ans[n]={};
	while(q-=2){
		cout<<'?'<<" "<<i+1<<" "<<j+1<<endl;
		int clk; cin>>clk;
		cout<<'?'<<" "<<j+1<<" "<<i+1<<endl;
		int aclk; cin>>aclk;
		if(clk>aclk){
			ans[i]=clk;
			while(ans[i]&&i<n) i++;
			if(i==j) i++;
			while(ans[i]&&i<n) i++;
		}else{
			ans[j]=aclk;
			while(ans[j]&&j<n) j++;
			if(i==j) j++;
			while(ans[j]&&j<n) j++;
		}
		if(i==n||j==n) break;
		if(i>j){
			swap(i,j);
		}
	}
	int mp[n+1]={},flag=0;
	for(int i=0;i<n;i++) mp[ans[i]]=1;
	for(int i=1;i<=n;i++) if(!mp[i]){ flag=i; break; }
	cout<<"! ";
	for(int i=0;i<n;i++){
		if(!ans[i]){
			cout<<flag<<" ";
			continue;
		}
		cout<<ans[i]<<" ";
	}
	
}
