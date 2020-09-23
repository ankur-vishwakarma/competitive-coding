#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		int ones=0,zrs=0;
		for(int i=0;i<n;i++){
			cin>>s[i];
			if(s[i]) ones++;
			else zrs++;
		}
		
		//editorial
		
		if(zrs>=n/2){
			cout<<n/2<<endl;
			for(int i=0;i<n/2;i++) cout<<0<<" ";
		}
		else{
			if(ones%2!=0){
				cout<<ones-1<<endl;
				for(int i=0;i<ones-1;i++) cout<<1<<" ";
			}else{
				cout<<ones<<endl;
				for(int i=0;i<ones;i++) cout<<1<<" ";
			}
		}
		
		
		/*if((n/2)%2!=0){
			if(ones%2==0&&ones>=n/2) cout<<n/2+1<<endl;
			else cout<<n/2<<endl;
			int i;
			for(i=0;i<n/2&&ones>1;i+=2) cout<<1<<" "<<1<<" ",ones-=2;
			while(i<n/2) cout<<0<<" ",i++;
		}else{
			cout<<n/2<<endl;
			if(zrs>=n/2) for(int i=0;i<n/2;i++) cout<<0<<" ";
			else for(int i=0;i<n/2;i++) cout<<1<<" ";
		}*/
		
		cout<<endl;
	}
}
