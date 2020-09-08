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
		for(int i=n-1;i>=0;i--) cout<<s[i]<<" ";
		cout<<endl;
	}
}
