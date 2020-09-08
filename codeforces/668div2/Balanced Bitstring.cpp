#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

main(){
	//FAST;
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		string a;
		cin>>a;
		//EDITORIAL
		int flag=0/*,ones=0,zrs=0*/;
		for(int i=0;i<k;i++){  //for all multiples of k check its same
			for(int j=i+k;j<n;j+=k){
				//cout<<a[i]<<" "<<a[j]<<endl;
				if(a[j]!='?'){
					if(a[i]!='?'&&a[i]!=a[j]){
						flag=1;
						break;
					}
					a[i]=a[j];
				}
			}
			/*if(a[i]!='?'){
				if(a[i]=='0') zrs++;
				else ones++;
			}*/
		}
		//see if initial of k is balanced
		int ones=0,zrs=0;
		for(int i=0;i<k;i++){
			if(a[i]=='1') ones++;
			else if(a[i]=='0') zrs++;
		}
		if (max(zrs, ones) > k / 2) flag=1;
		if(flag) cout<<"NO\n";
		else cout<<"YES\n";
		/*ll s[n+5];
		for(int i=0;i<n;i++){
			if(a[i]=='1') s[i+2]=1;
			else if(a[i]=='0') s[i+2]=-1;
			else s[i+2]=0;
		}
		//for(int i=2;i<n+2;i++) cout<<s[i]<<" ";
		int flag=0;
		for(int i=2;i<=n-k+2;i++){
			//cout<<s[i]<<" "<<i<<"i ";
			ll sum=0;
			queue<ll> z;  //zeroes
			for(int j=i;j<k+i;j++){
				if(s[j]==1||s[j]==-1) sum+=s[j];
				else if(s[j]==0) z.push(j);
			}
			//cout<<sum<<"sum1\n";
			if(sum==0){
				//just link closest zeroes - if odd zeroes then NO
				if(z.size()%2!=0){
					flag=1;
					break;
				}
				while(!z.empty()){
					ll a=z.front(); z.pop();
					ll b=z.front(); z.pop();
					s[a]=b,s[b]=a;
				}
				continue;
			}
			//sum not equal to zero either change zeroes or the edges
			
			//first lets try to fix sum using zeroes
			while(!z.empty()&&sum!=0){
				ll t=z.front(); z.pop();
				if(sum<0) s[t]=1,sum++;
				else s[t]=-1,sum--;
			}
			
			if(sum==0){
				//again just link closest zeroes - if odd zeroes then NO
				if(z.size()%2!=0){
					flag=1;
					break;
				}
				while(!z.empty()){
					ll a=z.front(); z.pop();
					ll b=z.front(); z.pop();
					s[a]=b,s[b]=a;
				}
				continue;
			}
			//fix using edges
			for(int j=i;j<k+i;j++){
				if(s[j]!=-1&&s[j]!=1){
					if(sum<0) s[s[j]]=-1,s[j]=1,sum++;
					else s[s[j]]=1,s[j]=-1,sum--;
				}
				if(sum==0) break;
			}
			if(sum!=0){
				flag=1;
				break;
			}
		}
		for(int i=2;i<n+2;i++) cout<<s[i];
		if(flag) cout<<"NO\n";
		else cout<<"YES\n";
		/*ll sum=0;
		queue<ll> zers;
		for(int i=2;i<=k+2;i++){
			if(s[i]==0) zers.push(i);
			else sum+=s[i];
		}
		if(sum!=0){
			if(zers.size()<abs(sum)){
				cout<<"NO\n";
				continue;
			}
			else{
				while(sum>0) s[zers.front()]=-1,sum--,zers.pop();
				while(sum<0) s[zers.front()]=1,sum++,zers.pop();
			}
		}
		//left zeroes lets link form an edge
		while(zers.size()>1){
			ll a=zers.front(),zers.pop();
			ll b=zers.front(),zers.pop();
			s[a]=b,s[b]=a;
		}
		for(int i=k+3;i<=n+2;i++){
			if(s[i]==s[i-k-1]&&s[i]!=0) continue;
			
		}*/
	}
}
