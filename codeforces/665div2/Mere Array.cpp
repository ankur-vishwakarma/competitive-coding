#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		vector<int> t,l;
		for(int i=0;i<n;i++) cin>>s[i],t.push_back(s[i]);
		sort(t.begin(),t.end());
		for(int i=0;i<n;i++){
			if(s[i]!=t[i]) l.push_back(s[i]);
		}
		int flag=0;
		for(int i=0;i<l.size();i++){
			if(l[i]%t[0]!=0){
				flag=1;
				break;
			}
		}
		if(flag) cout<<"NO\n";
		else cout<<"YES\n";
		/*for(int i=0;i<n;i++) cout<<t[i]<<" ";
		cout<<endl;
		int flag=0,min=t[0];	
		for(int i=0;i<n;i++){
			while(s[i]!=t[i]){
				cout<<s[i]<<" "<<t[i]<<" "<<i<<endl;
				int itr=lower_bound(t.begin()+i+1,t.end(),s[i])-t.begin();
				cout<<s[itr]<<" "<<itr<<endl;
				while(s[itr]==t[itr]&&itr<n) itr++;
				cout<<s[itr]<<" "<<itr<<" gd"<<__gcd(s[itr],s[i])<<endl;
				if(__gcd(s[itr],s[i])==min) swap(s[itr],s[i]);
				else { flag=1; break; }
			}
			if(flag) break;
		}
		for(int i=0;i<n;i++) cout<<s[i]<<" ";
		if(flag) cout<<"NO\n";
		else cout<<"YES\n";*/
	}
}
