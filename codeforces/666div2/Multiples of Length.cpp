#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main(){
	FAST;
	ll n;
	cin>>n;
	ll s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	cout<<1<<" "<<1<<"\n"<<-s[0]<<endl;
	if(n==1){
		cout<<1<<" "<<1<<"\n"<<0<<"\n"<<1<<" "<<1<<"\n"<<0<<endl;
		return 0;
	}
	cout<<1<<" "<<n<<"\n";
	cout<<"0 ";
	for(int i=1;i<n;i++) cout<<-(n*s[i])<<" ";
	cout<<endl;
	cout<<2<<" "<<n<<endl;
	for(int i=1;i<n;i++) cout<<(n-1)*s[i]<<" ";
	cout<<endl;
}
