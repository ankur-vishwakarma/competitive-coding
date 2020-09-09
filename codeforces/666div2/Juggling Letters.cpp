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
	FAST;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<char,int> m;
		string s;
		for(int i=0;i<n;i++){
			cin>>s;
			for(int j=0;j<s.size();j++) m[s[j]]++;
		}
		int flag=0;
		map<char,int>::iterator itr; 
		for (itr = m.begin(); itr != m.end(); ++itr) { 
       		 if(itr->second%n!=0){
        	flag=1;
        	break;
			}
    	} 
    	m.clear();
		if(flag) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
