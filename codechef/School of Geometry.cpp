#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n); sort(b,b+n);
		long long sum=0;
		for(int i=0;i<n;i++) sum+=(min(a[i],b[i]));
		cout<<sum<<endl;
	}
}
