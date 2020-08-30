#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll s[n],t[n];
		map<ll,ll> total,sm,tm;
		for(int i=0;i<n;i++) cin>>s[i],total[s[i]]++;
		for(int i=0;i<n;i++) cin>>t[i],total[t[i]]++;
		int flag=0;
		for(auto itr=total.begin();itr!=total.end();itr++){
			if(itr->second%2!=0){
				cout<<"-1\n";
				flag=1;
				break;
			}
		}
		if(flag) continue;
		sort(s,s+n);
		sort(t,t+n);
		if(s[0]>t[0]){
			for(int i=0;i<n;i++){
				int tmp=s[i];
				s[i]=t[i];
				t[i]=tmp;
			}
		}
		int i=0,j=0;
		ll count=0;
		auto itr=total.begin();
		while(i<n||j<n){
			int curr=itr->first,freq=itr->second/2;
			//cout<<curr<<" "<<freq<<endl;
			int flag=0,y;
			//cout<<s[i]<<" "<<t[j]<<endl;
			if(s[i]<=t[j]){
				flag=1;
				int c_in_s=0;
				while(c_in_s<freq&&s[i]==curr){
					c_in_s++,i++;
				}
				y=j;
				while(c_in_s<freq){
					count+=min(s[i],t[y]);
					int tmp=s[i];
					s[i]=t[y];
					t[y]=tmp;
					i++,y++;
					c_in_s++;
				}
			/*for(int l=0;l<n;l++) cout<<s[l]<<" ";
			cout<<endl;
			for(int l=0;l<n;l++) cout<<t[l]<<" ";
			cout<<count<<" a\n";*/
			}
			int c_in_t=0;
			while(c_in_t<freq&&t[j]==curr){
				c_in_t++,j++;
			}
			y=i;
			while(c_in_t<freq){
				count+=min(s[y],t[j]);
				int tmp=s[y];
				s[y]=t[j];
				t[j]=tmp;
				y++,j++;
				c_in_t++;
			}
			/*for(int l=0;l<n;l++) cout<<s[l]<<" ";
			cout<<endl;
			for(int l=0;l<n;l++) cout<<t[l]<<" ";
			cout<<count<<" b\n";*/
			if(!flag){
				int c_in_s=0;
				while(c_in_s<freq&&s[i]==curr){
					c_in_s++,i++;
				}
				y=j;
				while(c_in_s<freq){
					count+=min(s[i],t[y]);
					int tmp=s[i];
					s[i]=t[y];
					t[y]=tmp;
					i++,y++;
					c_in_s++;
				}
				for(int l=0;l<n;l++) cout<<s[l]<<" ";
				cout<<endl;
				for(int l=0;l<n;l++) cout<<t[l]<<" ";
				cout<<count<<" a\n";
			}
			itr++;
		}
		cout<<count<<endl;
	}
}
/*vector<ll> a,b;
		for(auto itr=sm.begin();itr!=sm.end();itr++){
			while(itr->second > total[itr->first]/2){
				//cout<<itr->first<<" ";
				a.push_back(itr->first);
				sm[itr->first]--;
				tm[itr->first]++;
			}
		}
		//cout<<e
		for(auto itr=tm.begin();itr!=tm.end();itr++){
			while(itr->second > total[itr->first]/2){
				//cout<<itr->first<<" ";
				b.push_back(itr->first);
				tm[itr->first]--;
				sm[itr->first]++;
			}
		}
		ll count=0;
		for(int i=0;i<a.size();i++){
			count+=min(a[i],b[i]);
		}
		cout<<count<<endl;*/
