#include<bits/stdc++.h>
using namespace std;
main(){
	int n,q;
	cin>>n>>q;
	int s[n],w[q][2];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<q;i++) cin>>w[i][0]>>w[i][1];
	for(int i=0;i<q;i++){
		int inc=0,dec=0;
		for(int j=w[i][0];j<w[i][1];j++){
			if(s[j-1]<s[j]) inc++;
			while(s[j-1]<s[j]&&j<w[i][1]) j++;
			if(s[j-1]>s[j]&&j<w[i][1]) dec++;
			while(s[j-1]>s[j]&&j<w[i][1]) j++;
			j--;
		}
		//cout<<inc<<" "<<dec<<endl;
		if(inc==dec) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
