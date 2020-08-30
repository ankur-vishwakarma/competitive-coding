#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	vector<vector<int> > v;
	for(int i=0;i<t;i++){
		int n; vector<int> tmp; string buf;
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>buf; int no=0,p=0;
			for(int k=9;k>=0;k--) no+=((buf[k]-'0')*pow(2,p++)); 
			tmp.push_back(no);
		}
		v.push_back(tmp);
	}
	
	for(int i=0;i<t;i++){
		int a=v[i][0],ans=0;
		for(int j=1;j<v[i].size();j++) a^=(v[i][j]);
		while(a>0) ans++, a=a&(a-1);
		cout<<ans<<endl;
	}
}
/*for(int i=0;i<t;i++){
		for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
		cout<<endl;
	}*/
