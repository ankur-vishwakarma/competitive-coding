#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		int lstpos=n-1;
		for(int i=n-2;i>=0;i--){
			if(s[i]<s[i+1]){
				break;
			}
			lstpos=i;
		}
		int count=0;
		for(int i=0;i<lstpos;i++){
			if(s[i+1]<s[i]) count=i+1;
		}
		cout<<count<<endl;
	}
}
