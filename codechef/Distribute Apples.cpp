#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	double s[t][2];
	for(int i=0;i<t;i++) cin>>s[i][0]>>s[i][1];
	for(int i=0;i<t;i++){
		double a=s[i][0]/s[i][1];
		long long b=(a/s[i][1]);
		double c=b*s[i][1];
		if(a==c) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
