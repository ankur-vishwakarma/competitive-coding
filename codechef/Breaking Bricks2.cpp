#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		float s,w[3];
		cin>>s>>w[0]>>w[1]>>w[2];
		//ans can be either 1,2,3
		//case when ans=1
		if(s<w[0]&&s<w[2]) cout<<"0\n";
		else if((w[0]<=s/3&&w[1]<=s/3&&w[2]<=s/3)||w[0]+w[1]+w[2]<=s) cout<<"1\n";
		//ans==2
		else if(w[0]+w[1]<=s||w[2]+w[1]<=s) cout<<"2\n";
		else cout<<"3\n";
	}
}
