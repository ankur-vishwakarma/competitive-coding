#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		float n;
		cin>>n;
		/*if(n==2) {
			cout<<"92\n";
			continue;
		}*/
		int k=n;
		int a=ceil(n/4);
		for(int i=0;i<k-a;i++) cout<<"9";
		for(int i=0;i<a;i++) cout<<"8";
		cout<<endl;
		/*if(n==1) cout<<"8\n";
		else if(n==2) cout<<"92\n";
		else if(n==3) cout<<"998\n";
		else{
			
		}*/
	}
}
