#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		long long cangive[n],need[n+1];
		for(int i=0;i<n;i++){
			cangive[i]=s[i]%k;
			need[i]=k-(s[i]%k);
		}
		need[n]=0;
		for(int i=1;i<n;i++) cangive[i]+=cangive[i-1];
		for(int i=n-1;i>=0;i--) need[i]+=need[i+1];
		int j=0;
		while(cangive[j]<need[j+1]&&j<n) j++;
		long long r=(cangive[j]-need[j+1])%k;
		cout<<r<<"\n";
	}
}
