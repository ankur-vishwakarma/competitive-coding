#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=1;
		cin>>n;
		for(int i=0;i<n;i++){
			if(i%2!=0&&n%2==0){
				cout<<count+n-1<<" ";
				for(int j=1;j<n;j++) cout<<count<<" ",count++;
				count++;
			}
			else for(int j=0;j<n;j++) cout<<count<<" ",count++;
			cout<<endl;
		}
	}
}
