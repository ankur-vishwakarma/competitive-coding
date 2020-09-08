#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[2*n];
		for(int i=0;i<2*n;i++) cin>>s[i];
		int vis[51]={};
		for(int i=0;i<2*n;i++){
			if(vis[s[i]]) continue;
			cout<<s[i]<<" ";
			vis[s[i]]=1;
		}
		cout<<endl;
	}
}
