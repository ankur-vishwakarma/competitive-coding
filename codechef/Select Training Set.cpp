#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<string,bool> > v;
		string a; bool b;
		for(int i=0;i<n;i++){
			cin>>a>>b;
			v.push_back({a,b});
		}
		sort(v.begin(),v.end());
		v.push_back({"\0",1});
		//for(int i=0;i<n;i++) cout<<v[i].first<<" "<<v[i].second<<endl;
		int cnt=0,flag=0;
		int spam=0,ntpsam=0;
		for(int i=1;i<=n;i++){
			flag=0;
			if(v[i-1].first==v[i].first){
				if(v[i-1].second==1) spam++;
				else ntspam++;
			}
			else{
				flag=1;
				if(v[i-1].second==1) spam++;
				else ntspam++;
			}
			
		}
		//if()
		cout<<cnt<<endl;
	}
}
