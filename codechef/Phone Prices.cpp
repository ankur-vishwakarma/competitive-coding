#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	vector <vector<int> > v;
	for(int i=0;i<t;i++){
		int s,b; cin>>s;
		vector<int> tmp;
		for(int j=0;j<s;j++){
			cin>>b; tmp.push_back(b);
		}
		v.push_back(tmp);
	}
	
	for(int i=0;i<t;i++){
		int count=0;
		for(int j=0;j<v[i].size();j++){
			int b=j-5,s,h=0;
			if(b<0) b=0;
			s=v[i][b];
			for(int k=b+1;k<=j;k++){
				 if(v[i][k]<s) s=v[i][k],h=k;
			}
			if(h==j){
			 count++;
			 //cout<<s<<" "<<h<<endl;	
			} 
		}
		cout<<count<<"\n";
	}
}
