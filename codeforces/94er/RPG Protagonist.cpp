#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int m,f,cnts,cntw,s,w;
		cin>>m>>f>>cnts>>cntw>>s>>w;
		int ans=0,cnt=0;
		for(int i=0;i<=cnts;i++){
			cnt=0;
			int mleft=m-i*s;
			cnt+=i;
			if(mleft<0) break;
			//try taking axes now
			int mw=min(mleft/w,cntw);
			cnt+=mw;
			
			int cntss=cnts-i,cntww=cntw-mw;
			
			//follower
			if(s<=w){
				int fs=min(f/s,cntss),fleft=f-fs*s;
				int fw=min(fleft/w,cntww);
				cnt+=(fs+fw);
			}
			else{
				int fw=min(f/w,cntww),fleft=f-fw*w;
				int fs=min(fleft/s,cntss);
				cnt+=(fs+fw);
			}
			ans=max(ans,cnt);
		}
		cout<<ans<<endl;
	}
}
