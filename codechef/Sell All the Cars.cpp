#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		sort(s,s+n,greater<int>());
		long long sum=0;
		for(int i=0;i<n;i++){
			int k=s[i]-i;
			if(k<0) break;
			sum=(sum%m+k%m)%m;
		}
		cout<<sum<<endl;
	}
}
