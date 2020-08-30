#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		int flag=0;
		for(int i=0;i<n;i++){
			if(p%s[i]!=0){
				cout<<"YES ";
				for(int j=0;j<i;j++) cout<<"0 ";
				cout<<p/s[i]+1<<" ";
				for(int j=i+1;j<n;j++) cout<<"0 ";
				cout<<endl;
				flag=1;
				break;
			}
		}
		if(flag==1) continue;
		if(n==2&&(s[0]==1||s[1]==1)){
			cout<<"NO\n";
			continue;
		}
		//sort()
		flag=0;
		for(int i=0;i<n-1;i++){
			if(s[i]==1||s[i+1]%s[i]==0) continue;
				flag=1;
				cout<<"YES ";
				double a=p-s[i+1];
				a=ceil(a/s[i]);
				long long b=a;
				for(int j=0;j<i;j++) cout<<"0 ";
				cout<<b<<" 1 ";
				for(int j=i+2;j<n;j++) cout<<"0 ";
				cout<<endl;
				break;
		}
		if(flag!=1) cout<<"NO\n";
	}
}
