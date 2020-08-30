#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[2*n];
		for(int i=0;i<2*n;i++) cin>>s[i];
		if(n==1){
			if(s[0]==s[1]) cout<<"1\n";
			else cout<<"0\n";
			continue;
		}
		sort(s,s+2*n,greater<int>());
		//lets hash all
		unordered_map <int,int> hm;
		for(int i=0;i<2*n;i++){
			if(!hm[s[i]]) hm[s[i]]=1;
			else hm[s[i]]++;
		}
		//search for pair first
		int count=0;
		for(int i=0;i<2*n-1;i++){
			while(s[i]!=s[i+1]&&i<2*n-1) i++;
			if(i>=2*n-1) break;
			unordered_map <int,int> zer=hm;
			count=0;
			int j=i+2;
			cout<<s[i]<<endl;
			while(j<2*n-1&&zer[s[i]-s[j]]){
				cout<<s[i]-s[j]<<" "<<s[j]<<endl;
				count+=2;
				zer[s[j]]--,zer[s[i]-s[j]]--;
				j++;
			}
			if(count==2*n-2){ cout<<count<<endl; break; }
		}
		if(count!=2*n-2) cout<<"0\n";
	}
}
/*
1 7  7 4 15 20 16 18 17 17 10 13 2 -3 1 -1
*/
