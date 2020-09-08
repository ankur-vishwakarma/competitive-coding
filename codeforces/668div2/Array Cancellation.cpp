#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		int lstfound=-1;
		for(int i=0;i<n;i++){
			if(s[i]>0){
				int j=i+1;
				if(lstfound>j) j=lstfound;
				for(;j<n;j++){
					if(s[j]<0){
						if(abs(s[j])>s[i]){
							s[j]+=s[i],s[i]=0;
							break;
						}
						else if(abs(s[j])==s[i]){
							s[i]=s[j]=0;
							break;
						}
						else{
							s[i]+=s[j],s[j]=0;
						}
					}
				}
				lstfound=j;
			}
		}
		ll ans=0;
		for(int i=0;i<n;i++) if(s[i]>0) ans+=s[i];
		cout<<ans<<endl;
	}
}
