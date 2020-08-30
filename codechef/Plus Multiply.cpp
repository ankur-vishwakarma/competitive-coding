#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,tw=0,z=0,b;
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>b;
			if(b==2) tw++;
			if(b==0) z++;
		}
		cout<<(z*(z-1))/2+(tw*(tw-1))/2<<endl;
	}
}
