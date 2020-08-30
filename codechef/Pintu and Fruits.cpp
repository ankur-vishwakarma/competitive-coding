#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int s[n],t[n],p[m+1]={0};
		long long u[m+1]={0};
		for(int i=0;i<n;i++) cin>>s[i];
		for(int i=0;i<n;i++) cin>>t[i];
		for(int i=0;i<n;i++){
			p[s[i]]=1;
			u[s[i]]+=t[i];
		}
		long long mi=INT_MAX;
		for(int i=1;i<=m;i++) if(p[i]!=0) mi=min(mi,u[i]);
		//if(mi==INT_MAX) mi=0;
		cout<<mi<<endl;
	}
}
