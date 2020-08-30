#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	vector<vector<int> > v,vv,v2;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector<int> tp;
		for(int j=0;j<n;j++){
			int a;
			cin>>a;
			tp.push_back(a);
		}
		v.push_back(tp);
		
		vector<int> tmp;
		for(int j=0;j<n;j++){
			int a;
			cin>>a;
			tmp.push_back(a);
		}
		vv.push_back(tmp);
		
	}
    /*for(int i=0;i<t;i++)
		for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" "<<vv[i][j]<<endl;*/
	for(int i=0;i<t;i++){
		vector<int> tmp;
		for(int j=0;j<v[i].size();j++){
			tmp.push_back(v[i][j]*20-vv[i][j]*10);
		}
		v2.push_back(tmp);
	}
	
	for(int i=0;i<t;i++){
		int max=v2[i][0];
		for(int j=1;j<v2[i].size();j++) if(v2[i][j]>max) max=v2[i][j];
		if(max<0) max=0;
		cout<<max<<"\n";
	}
}

