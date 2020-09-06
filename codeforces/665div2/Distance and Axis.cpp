#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(k>=n) cout<<k-n<<endl;
		else{
			if(n%2==0){
				if(k%2==0) cout<<"0\n";
				else cout<<"1\n";
			}
			else{
				if(k%2==1) cout<<"0\n";
				else cout<<"1\n";
			}
		}
	}
}
