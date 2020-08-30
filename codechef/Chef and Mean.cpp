#include<bits/stdc++.h>
using namespace std;
main(){
	int t,b;
	cin>>t;
	vector<vector<float> >v;
	float s[t];
	for(int i=0;i<t;i++){
		double sum=0,size;
		cin>>size;
		vector <float> tmp;
		for(int j=0;j<size;j++) cin>>b,sum+=b,tmp.push_back(b);
		v.push_back(tmp);
		s[i]=sum/size;
	}
/*	for(int i=0;i<t;i++){
		for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
		cout<<endl;
	}*/
	//if(s[2]==v[2][0]) cout<<"yes";
	for(int i=0;i<t;i++){
		//cout<<s[i]<<endl;
		int flag=0;
		for(int j=0;j<v[i].size();j++) if(s[i]==v[i][j]){ cout<<j+1<<"\n",flag=1; break; }
		if(flag!=1) cout<<"Impossible\n"; 
	}
}
