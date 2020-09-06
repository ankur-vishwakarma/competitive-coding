#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<31){
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		if(n==36) cout<<"5 6 10 15\n";
		else if(n==44) cout<<"6 7 10 21\n";
		else if(n==40) cout<<"15 14 10 1\n";
		else{
			cout<<"14 10 6 ";
			cout<<n-30<<endl;
		}
	}
}
