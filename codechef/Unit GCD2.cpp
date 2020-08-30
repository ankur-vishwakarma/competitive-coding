#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<=3){
			cout<<"1\n"<<n<<" ";
			for(int i=1;i<=n;i++) cout<<i<<" ";
			cout<<endl;
			continue;
		}
		cout<<n/2<<endl;
		cout<<"3 1 2 3\n";
		for(int i=4;i+1<=n;i+=2){
			printf("2 %d %d\n",i,i+1);
		}
		if(n%2==0) cout<<"1 "<<n<<endl;
	}
}
