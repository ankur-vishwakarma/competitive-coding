#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define mod 1000000007


using namespace std;
const int64_t INF = 1e17;

ll power(ll x, ll y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
} 
main(){
	FAST;
	ll n;
	cin>>n;
	ll s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s,s+n);
	ll ans=INF;
	for(ll i=1;i<=s[n-1];i++){
		ll cnt=0,pp=1;
		//if(i>s[1]) break;
		for(ll j=0;j<n;j++){
			//cout<<(abs(power(i,j)-s[j]))<<endl;
			cnt+=(abs(s[j]-pp));
			if(cnt>=ans) break;
			pp*=i;
		} 
		//cout<<cnt<<"c "<<endl;
		
		if(cnt>=ans) break;
		ans=min(ans,cnt);
	}
	cout<<ans;
	/*int ans=INT_MAX;
	for(int i=1;;i++){
		int cnt=0;
		if(i>s[1]) break;
		for(int j=0;j<n;j++) cnt+=(abs(power(i,j)-s[j]));
		ans=min(ans,cnt);
	}
	cout<<ans<<endl;*/
	/*ll ans=1,k=1;
	while(ans<=10000000000){
		k++;
		ans=power(k,n-1);
	}
	//cout<<k<<endl;
	ans=INT_MAX;
	for(ll i=1;i<=k;i++){
		ll cnt=0;
		if(i>s[1]) break;
		for(ll j=0;j<n;j++) cnt+=(abs(power(i,j)-s[j]));
		ans=min(ans,cnt);
	}
	cout<<ans<<endl;
	//cout<<k<<endl;
	//k
	ll a1=0,a2=0,a3=0;
	for(int i=0;i<n;i++){
		ll b=power(k,i);
		//cout<<b<<" ";
		a1+=(abs(s[i]-b));
	}
	//k-1
	for(int i=0;i<n;i++){
		ll b=power(k-1,i);
		a2+=(abs(s[i]-b));
	}
	//k+1
	for(int i=0;i<n;i++){
		ll b=power(k+1,i);
		a3+=(abs(s[i]-b));
	}
	cout<<min(a1,min(a2,a3));
	//cout<<a1<<endl;*/
}
