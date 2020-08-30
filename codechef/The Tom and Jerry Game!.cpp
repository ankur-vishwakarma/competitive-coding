#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		ll ts;
		cin>>ts;
		if(ts%2!=0){
			cout<<(ts-1)/2<<endl;
		}
		else{
			ll l=ts,count=1;
			while(l%2==0) l/=2,count++;
			if(l==1){
				cout<<"0\n";
				continue;
			}
			cout<<(l-1)/2<<endl;
		}
	}
}
