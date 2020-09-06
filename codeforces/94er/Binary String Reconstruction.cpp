#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int x,n=s.length();
		cin>>x;
		int a[n];
		for(int i=0;i<n;i++) a[i]=-1;
		int flag=0;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				if(i-x>=0&&(a[i-x]==1||a[i-x]==-1)) a[i-x]=1;
				else if(i+x<n&&(a[i+x]==1||a[i+x]==-1)) a[i+x]=1;
				else { flag=1; break; }
			}else{
				if(i+x>=n&&i-x<0) continue;
				else if(i-x>=0&&i+x<n){
					if((a[i-x]==0&&a[i+x]==0)||(a[i-x]==-1&&a[i+x]==-1)||(a[i-x]==0&&a[i+x]==-1)||(a[i-x]==-1&&a[i+x]==0)){
						a[i-x]=a[i+x]=0;
						continue;
					}
					else { flag=1; break; }
				}
				else if(i-x>=0&&(a[i-x]==0||a[i-x]==-1)) a[i-x]=0;
				else if(i+x<n&&(a[i+x]==0||a[i+x]==-1)) a[i+x]=0;
				else { flag=1; break; }
			}
			//for(int j=0;j<n;j++) cout<<a[j];
			//cout<<endl;
		}
		if(flag) cout<<-1<<endl;
		else{
			for(int i=0;i<n;i++){
				if(a[i]==-1) cout<<1;
				else cout<<a[i];
			}
			cout<<endl;
		}
	}
}
