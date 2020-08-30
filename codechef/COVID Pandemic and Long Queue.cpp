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
		int lst_one,flag=0;
		for(int i=0;i<n;i++) if(s[i]){ lst_one=i; break; }
		for(int i=lst_one+1;i<n;i++){
			if(s[i]){
				if(i-lst_one<6){
					cout<<"NO\n";
					flag=1;
					break;
				}
				lst_one=i;
			}
		}
		if(flag!=1) cout<<"YES\n";
	}
}
