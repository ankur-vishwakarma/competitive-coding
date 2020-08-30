#include<iostream>
#include<vector>
using namespace std;
main(){
	int t;
	cin>>t;
	vector<vector<int> >s;
	for(int i=0;i<t;i++){
		vector<int> temp;
		int k,v;
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>v;
			temp.push_back(v);
		}
		s.push_back(temp);
	}
	for(int i=0;i<t;i++){
		int p=0,n=0;
		for(int j=0;j<s[i].size();j++){
			if(s[i][j]<0) n++;
			else p++;
		}
		
		if(p!=0&&n!=0){
			if(p>n) cout<<p<<" "<<n<<"\n";
		    else cout<<n<<" "<<p<<"\n";
		}
		else{
			if(p==0) cout<<n<<" "<<n<<"\n";
			else if(n==0) cout<<p<<" "<<p<<"\n";
		}
	}
}
