#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		ll s[3],t[3];
		for(int i=0;i<3;i++) cin>>s[i];
		for(int i=0;i<3;i++) cin>>t[i];
		ll ans=0;
		//twos
		ans+=(min(s[2],t[1])*2);
		t[1]-=(min(s[2],t[1]));
		//ones
		s[1]-=min(s[1],t[1]);
		if(s[1]>0){
			s[1]-=min(s[1],t[0]);
			if(s[1]>0){
				ans-=(s[1]*2);
			}
		}
		cout<<ans<<endl;
	}
}
/*if(s[2]<=t[1]) ans+=(s[2]*2),t[1]-=s[2],s[2]=0;
		else{
			ans+=((s[2]-t[1])*2);
			s[2]-=t[1],t[1]=0;
			//match with 2
			if(s[2]<=t[2]){
				t[2]-=s[2],s[2]=0;
			}
			else{
				
			}
		}*/
