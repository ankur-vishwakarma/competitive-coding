#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int s[3];
		for(int i=0;i<3;i++) cin>>s[i];
		sort(s,s+3,greater<int>());
		vector<int> a;
		if(s[0]!=s[1]){
			cout<<"NO\n";
			continue;
		}
		else{
			cout<<"YES\n";
			cout<<s[0]<<" "<<s[2]<<" "<<s[2]<<endl;
		}
	}
}
