#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	int a[t]; string s[t];
	for(int i=0;i<t;i++) cin>>a[i]>>s[i];
	for(int i=0;i<t;i++){
		int dst=a[i];
		for(int j=0;j<a[i];j++){
			for(int k=j+1;k<j+1+dst&&k<a[i];k++){
				if(s[i][j]==s[i][k]){  dst=k-j; break; }
			}
		}
		cout<<a[i]-dst<<endl;
	}
}
